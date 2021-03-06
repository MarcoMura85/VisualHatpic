#include <ros/ros.h>
#include <moveit/move_group_interface/move_group.h>
#include <tf/tf.h>
#include <tf/transform_datatypes.h>
//#include <moveit/robot_model/robot_model.h>
int main(int argc, char **argv)
{
  ros::init(argc, argv, "lesson_move_group");

  // start a background "spinner", so our node can process ROS messages
  //  - this lets us know when the move is completed
  ros::AsyncSpinner spinner(1);
  spinner.start();

  moveit::planning_interface::MoveGroup group("arm");

  //metto il robot in home  
  group.setNamedTarget("home"); 
  //group.setNamedTarget("straight_up");
  group.move();

  //---------------------------------
  std::vector< double > Angles=group.getCurrentRPY();
  Eigen::AngleAxisd rollAngle(Angles[0], Eigen::Vector3d::UnitZ());
  Eigen::AngleAxisd yawAngle(Angles[1], Eigen::Vector3d::UnitY());
  Eigen::AngleAxisd pitchAngle(Angles[2], Eigen::Vector3d::UnitX());

  tf::Quaternion qt;
  qt=tf::createQuaternionFromRPY ( Angles[0], Angles[1], Angles[2]);

/*
// // create transform
        tf::Transform point_pos( tf::Transform(tf::createQuaternionFromRPY(rx,ry,rz),tf::Vector3(x,y,z)));
*/


  //--------------------------------------

  /*/ std::cout<<"pose.w= "<<pose.orientation.w<<" q[0]= "<<qt.w()<<std::endl;
  std::cout<<"pose.x= "<<pose.orientation.x<<" q[1]= "<<qt.x()<<std::endl;
  std::cout<<"pose.y= "<<pose.orientation.y<<" q[2]= "<<qt.y()<<std::endl;
  std::cout<<"pose.z= "<<pose.orientation.z<<" q[3]= "<<qt.z()<<std::endl;

  //getchar();*/

  //abbasso il robot in posizion operativa
  geometry_msgs::Pose pose=group.getCurrentPose().pose;

   Eigen::Affine3d poseNew = Eigen::Translation3d(pose.position.x, pose.position.y, pose.position.z-0.05) * Eigen::Quaterniond(qt.w(), qt.x(), qt.y(), qt.z());;
    

  group.setPoseTarget(poseNew);

  // check to see if plan successful
  move_group_interface::MoveGroup::Plan plan;
  if (!group.plan(plan))
  {
    ROS_FATAL("Unable to create motion plan.  Aborting.");
    exit(-1);
  }


  group.move() ;

 sleep(2.0);	

  //ruoto il robot rispetto alla z della base


  group.setNamedTarget("home");
  group.move();

}


