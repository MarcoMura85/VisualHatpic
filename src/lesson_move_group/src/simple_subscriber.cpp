/**
 ** Simple ROS Subscriber Node
 **/
#include <ros/ros.h>
#include <lesson_move_group/PathPosition.h> // TODO: Uncomment this line

// TODO: Uncomment the next 5 lines
void positionCallback(const lesson_move_group::PathPosition& msg)
{
    ROS_INFO("New position: %.1f,%.1f,%.1f", msg.x, msg.y, msg.z);
}

int main(int argc, char* argv[])
{
    ros::init(argc, argv, "simple_subscriber");
    ros::NodeHandle node;

    // TODO: Uncomment the next 2 lines
    while(ros::ok()) {
    	ros::Subscriber subscriber = node.subscribe("position", 1000, positionCallback);
    	ROS_INFO("New posiddffv");
    	ros::spin();
	}
    return 0;
}
