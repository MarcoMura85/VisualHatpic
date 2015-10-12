#include <ros/ros.h>
#include <moveit/move_group_interface/move_group.h>
int main(int argc, char **argv)
{
  ros::init(argc, argv, "lesson_move_group");

  // start a background "spinner", so our node can process ROS messages
  //  - this lets us know when the move is completed
  ros::AsyncSpinner spinner(1);
  spinner.start();

  moveit::planning_interface::MoveGroup group("manipulator");
  //group.setRandomTarget();
  //group.setNamedTarget("home");
  std::map<std::string, double> joints;
  joints["joint_1"] = -0.40;
  joints["joint_2"] =  0.27;
  joints["joint_3"] =  0.48;
  joints["joint_4"] =  0.07;
  joints["joint_5"] =  0.75;
  joints["joint_6"] = -0.19;

  //group.setJointValueTarget(joints);

  //Eigen::Affine3d pose = Eigen::Translation3d(0.028, 0.793, 0.390)*Eigen::Quaterniond(-0.014, 0.733, 0.680, -0.010);
  //group.setPoseTarget(pose);

  // create a new pose that may be out-of-reach
  //geometry_msgs::Pose pose = group.getRandomPose().pose;
  geometry_msgs::Pose pose=group.getCurrentPose().pose;;
  //pose.position.z -= 0.2;
  //pose.position.x += 0.2;
	
  pose.position.y +=0.1;

  group.setPoseTarget(pose);

  // check to see if plan successful
  move_group_interface::MoveGroup::Plan plan;
  if (!group.plan(plan))
  {
    ROS_FATAL("Unable to create motion plan.  Aborting.");
    exit(-1);
  }

  // do non-blocking move request
  group.asyncExecute(plan);

  // cancel motion after fixed time
  sleep(1.0);
  group.stop();
  sleep(1.0);  // wait for stop command to be received*/

  group.move();
}


