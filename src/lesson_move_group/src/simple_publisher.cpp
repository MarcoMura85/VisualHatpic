/**
 ** Simple ROS Publisher Node
 **/
#include <ros/ros.h>
#include <lesson_move_group/PathPosition.h> // TODO: Uncomment this line
#include <signal.h>
#include <termios.h>
#include <stdio.h>

int getKey() {
    int character;
    struct termios orig_term_attr;
    struct termios new_term_attr;

    /* set the terminal to raw mode */
    tcgetattr(fileno(stdin), &orig_term_attr);
    memcpy(&new_term_attr, &orig_term_attr, sizeof(struct termios));
    new_term_attr.c_lflag &= ~(ECHO|ICANON);
    new_term_attr.c_cc[VTIME] = 0;
    new_term_attr.c_cc[VMIN] = 0;
    tcsetattr(fileno(stdin), TCSANOW, &new_term_attr);

    /* read a character from the stdin stream without blocking */
    /*   returns EOF (-1) if no character is available */
    character = fgetc(stdin);

    /* restore the original terminal attributes */
    tcsetattr(fileno(stdin), TCSANOW, &orig_term_attr);

    return character;
}




int main(int argc, char* argv[])
{
    ros::init(argc, argv, "simple_publisher");
    ros::NodeHandle node;

    // Create a 1Hz update rate
    ros::Rate loop_rate(25.0);

    // Advertise that we're publishing the topic "position", of type PathPosition
    ros::Publisher pub = node.advertise<lesson_move_group::PathPosition>("position", 1000); // TODO: Uncomment this line
    
    // The angle counter
    int angle = 0; 

    ROS_INFO("Starting publisher");
    while(ros::ok()) {
        // Create a message, and set the fields appropriately 
        // TODO: Uncomment the next 4 lines
        lesson_move_group::PathPosition msg;
        msg.header.stamp = ros::Time::now();
   	float zInc = 0;
        int c = getKey();    
   
        if (c == 'a')
          zInc += 0.2;
  	else if (c == 'b')
    	  zInc -= 0.2;


        msg.z = 0.0 + zInc;
        msg.x = 0.0;
        msg.y = 0.0;
        // Update angle
       // angle = (angle + 10) % 360;

        // Publish the message, give ROS an opportunity to run
        // TODO: Uncomment the next 3 lines
        pub.publish(msg);
        ros::spinOnce();
        ROS_INFO("Published message %.1f, %.1f, %.1f", msg.x, msg.y, msg.z);
        // Wait 1 second to publish again
        loop_rate.sleep();
    }

    ROS_INFO("Publisher done.");
    return 0;
}
