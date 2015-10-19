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

#include <lesson_move_group/KeyboardInput.h>


void moveCartesian (moveit::planning_interface::MoveGroup *group, float dx,float dy,float dz,float rx, float ry,float rz){

  std::vector<geometry_msgs::Pose> waypoints;
  geometry_msgs::Pose targetPose = group->getCurrentPose().pose;
  std::vector< double > Angles=group->getCurrentRPY();
  moveit::planning_interface::MoveGroup::Plan plan;
  
  targetPose.position.x += dx;
  targetPose.position.y += dy;
  targetPose.position.z += dz;
  targetPose.orientation = tf::createQuaternionMsgFromRollPitchYaw(Angles[0]+rx,Angles[1]+ry,Angles[2]+rz);
  
  waypoints.push_back(targetPose);
  
  moveit_msgs::RobotTrajectory trajectory_msg;
  group->setPlanningTime(10.0);
 
  
  
  double fraction = group->computeCartesianPath(waypoints,
                                               0.01,  // eef_step
                                               0.0,   // jump_threshold
                                               trajectory_msg, false);
  
  // First to create a RobotTrajectory object
  robot_trajectory::RobotTrajectory rt(group->getCurrentState()->getRobotModel(), "manipulator");

  // Second get a RobotTrajectory from trajectory
  rt.setRobotTrajectoryMsg(*group->getCurrentState(), trajectory_msg);
 
  // Thrid create a IterativeParabolicTimeParameterization object
  trajectory_processing::IterativeParabolicTimeParameterization iptp;
  // Fourth compute computeTimeStamps
  bool success = iptp.computeTimeStamps(rt);
  ROS_INFO("Computed time stamp %s",success?"SUCCEDED":"FAILED");
  
  // Get RobotTrajectory_msg from RobotTrajectory
  rt.getRobotTrajectoryMsg(trajectory_msg);
  plan.trajectory_ = trajectory_msg;
  //sleep(5.0);
 
 /* while(group.getCurrentPose().pose!=targetPose)
  {	
	std::cout<<"wait"<<std::endl;
	}*/
  //return(plan);
  group->execute(plan);

  std::cout<<"finito?"<<std::endl;
}


float robotIncrement[6]= {0,0,0,0,0,0};
bool isNewPosition = false; 

void positionCallback(const lesson_move_group::KeyboardInput& msg)
{
    
    if ( msg.x+msg.y+msg.z+msg.rx+msg.ry+msg.rz!=0 ){
        isNewPosition=true;
   	robotIncrement[0]=msg.x;
	robotIncrement[1]=msg.y;
	robotIncrement[2]=msg.z;
	robotIncrement[3]=msg.rx;
	robotIncrement[4]=msg.ry;
	robotIncrement[5]=msg.rz;
        ROS_INFO("New position: %.1f,%.1f,%.1f", msg.x, msg.y, msg.z );
    }
    else
	isNewPosition=false;
}


int main(int argc, char **argv)
{
  ros::init(argc, argv, "move_group_interface_tutorial");
  ros::NodeHandle node_handle;
  
  ros::AsyncSpinner spinner(1);
  spinner.start();
 
  moveit::planning_interface::MoveGroup group("manipulator");
  //moveit::planning_interface::PlanningSceneInterface planning_scene_interface; 

  ros::Publisher display_publisher = node_handle.advertise<moveit_msgs::DisplayTrajectory>("/move_group/display_planned_path", 1, true);
  moveit_msgs::DisplayTrajectory display_trajectory;

  std::string eef_link = group.getEndEffectorLink();
  std::string eef = group.getEndEffector();
  std::string base_link = group.getPoseReferenceFrame();

//  std::cout<<eef_link<<std::endl; 
//  std::cout<<base_link<<std::endl;

  moveit::planning_interface::MoveGroup::Plan plan;
  group.setStartStateToCurrentState();
  group.setPoseReferenceFrame(base_link);
  group.setEndEffectorLink(eef_link);

  std::vector<geometry_msgs::Pose> waypoints;

  geometry_msgs::Pose target_pose = group.getCurrentPose().pose;
  geometry_msgs::Pose init_pose = group.getCurrentPose().pose;


//initial position of my manipulator
  std::map<std::string, double> joints;

  std::vector<double> jointDbg = group.getCurrentJointValues();

  /*for (int i=0; i< jointDbg.size(); i++)
	std::cout<<"joint "<<i<<"= "<<jointDbg[i]<<std::endl;*/


  joints["joint_1"] = 0.000119189;
  joints["joint_2"] = -0.0129632;
  joints["joint_3"] = 0.274897;
  joints["joint_4"] = 0.00352502;
  joints["joint_5"] = -0.262732;
  joints["joint_6"] = 1.56739;
  
  group.setJointValueTarget(joints);
  group.plan(plan);
  group.move();

//  new cartesian position from keyboard
  ros::Subscriber subscriber = node_handle.subscribe("position", 1000, positionCallback); 
//  moveCartesian (&group, 0, 0.2, -0.3, 0, 0.6, 0.2);

  std::cout<<"finito?"<<std::endl;
  

  while (ros::ok()){
	if(isNewPosition){
		moveCartesian (&group, robotIncrement[0], robotIncrement[1], robotIncrement[2], robotIncrement[3], 
				robotIncrement[4], robotIncrement[5]);
	}

  }
 

  ros::shutdown(); 
  return 0;
}
