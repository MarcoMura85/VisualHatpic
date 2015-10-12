#include <ros/ros.h>
#include <moveit/move_group_interface/move_group.h>
#include <moveit/robot_state/conversions.h>
#include <moveit/trajectory_processing/iterative_time_parameterization.h>
#include <moveit/planning_interface/planning_interface.h>
#include <moveit/planning_scene/planning_scene.h>
#include <moveit/kinematic_constraints/utils.h>
#include <moveit_msgs/DisplayTrajectory.h>
#include <moveit_msgs/PlanningScene.h>
#include <tf/tf.h>
#include <tf/transform_datatypes.h>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "lesson_move_group");

  // start a background "spinner", so our node can process ROS messages
  //  - this lets us know when the move is completed
  ros::AsyncSpinner spinner(1);
  spinner.start();

  moveit::planning_interface::MoveGroup group("manipulator");

  //group.setPlannerId("ompl_planning/plan_kinematic_path");

  //metto il robot in home  
  //group.setNamedTarget("home"); 
  //group.setNamedTarget("straight_up");
  group.move();

  //---------------------------------
  std::vector< double > Angles=group.getCurrentRPY();
  Eigen::AngleAxisd rollAngle(Angles[0], Eigen::Vector3d::UnitZ());
  Eigen::AngleAxisd yawAngle(Angles[1], Eigen::Vector3d::UnitY());
  Eigen::AngleAxisd pitchAngle(Angles[2], Eigen::Vector3d::UnitX());

  tf::Quaternion qt;
  qt=tf::createQuaternionFromRPY ( Angles[0], Angles[1], Angles[2]);

  //abbasso il robot in posizion operativa

  robot_state::RobotState start_state(*group.getCurrentState());

  moveit::core::RobotStatePtr kinematic_state;
  moveit_msgs::RobotTrajectory trajectory;
  std::vector<geometry_msgs::Pose> waypoints;


  geometry_msgs::Pose target_pose3 = group.getCurrentPose().pose;
  waypoints.push_back(target_pose3);
  //target_pose3.position.x += 0.2;
  target_pose3.position.z -= 0.5;
  waypoints.push_back(target_pose3);  
  
  //waypoints.push_back(poseNew);
  //double fraction = group.computeCartesianPath(waypoints,CART_STEP_SIZE_,CART_JUMP_THRESH_,trajectory_,AVOID_COLLISIONS_);
  double fraction = group.computeCartesianPath(waypoints,
                                             0.01,  // eef_step
                                             0.0,   // jump_threshold
                                             trajectory);
  

  
  kinematic_state = moveit::core::RobotStatePtr(group.getCurrentState());
  robot_trajectory::RobotTrajectory rt(kinematic_state->getRobotModel(), "manipulator"); 
  rt.setRobotTrajectoryMsg(*kinematic_state, trajectory);

  // check to see if plan successful
  move_group_interface::MoveGroup::Plan plan;

  plan.trajectory_=trajectory;
  group.execute(plan);

  //group.move(plan) ;
  sleep(1.5);

  Angles=group.getCurrentRPY();

  waypoints.clear();
  target_pose3 = group.getCurrentPose().pose;
  waypoints.push_back(target_pose3);
  target_pose3.position.y += 0.5;
  waypoints.push_back(target_pose3);
  fraction = group.computeCartesianPath(waypoints,
                                             0.01,  // eef_step
                                             0.0,   // jump_threshold
                                             trajectory);

  kinematic_state = moveit::core::RobotStatePtr(group.getCurrentState());
  //rt(kinematic_state->getRobotModel(), "manipulator"); 
  rt.setRobotTrajectoryMsg(*kinematic_state, trajectory);  

  plan.trajectory_=trajectory;
  //group.execute(plan);
  sleep(2.0);
  
  Angles=group.getCurrentRPY();	

  qt=tf::createQuaternionFromRPY ( Angles[0], Angles[1], Angles[2]);
  
  waypoints.clear();
  target_pose3 = group.getCurrentPose().pose;
  waypoints.push_back(target_pose3);

  tf::Transform point_pos( tf::Transform(tf::createQuaternionFromRPY(Angles[0],Angles[1],Angles[2]-0.5),tf::Vector3(target_pose3.position.x,target_pose3.position.y,target_pose3.position.z)));
  tf::poseTFToMsg (point_pos,target_pose3);
   
  waypoints.push_back(target_pose3);
  fraction = group.computeCartesianPath(waypoints,
                                             0.01,  // eef_step
                                             0.0,   // jump_threshold
                                             trajectory);
  
  kinematic_state = moveit::core::RobotStatePtr(group.getCurrentState());
  //rt(kinematic_state->getRobotModel(), "manipulator"); 
  rt.setRobotTrajectoryMsg(*kinematic_state, trajectory);  

  plan.trajectory_=trajectory;
  group.execute(plan);
  sleep(2.0);

  //ruoto il robot rispetto alla z della base

  group.setNamedTarget("home");
  group.move();

}


