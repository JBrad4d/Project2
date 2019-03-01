#ifndef __JOYSTICK_CONTROL__
#define __JOYSTICK_CONTROL__

#include "ros/ros.h"
#include "sensor_msgs/Joy.h"

#include "geometry_msgs/Accel.h"

namespace controllers
{

class JoystickControl
{
public:
    JoystickControl();

public:

    ros::NodeHandle n;
    ros::Publisher pub_command;

    geometry_msgs::Accel cmd;

    void joystickCallback(const sensor_msgs::Joy::ConstPtr & msg);

    void publishCommand();


};

}
#endif
