#ifndef __JOYSTICK__
#define __JOYSTICK__

#include "ros/ros.h"
#include "turtlesim/Pose.h"
#include "sensor_msgs/Joy.h"

#include "geometry_msgs/Twist.h"

class Joystick
{
public:
    Joystick();

public:

    ros::NodeHandle n;
    ros::Publisher pub_command;

    geometry_msgs::Twist cmd;

    void printMessage();

    void poseCallback(const turtlesim::Pose::ConstPtr & msg);

    void joystickCallback(const sensor_msgs::Joy::ConstPtr & msg);

    void publishCommand();


};


#endif
