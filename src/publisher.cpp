#include "ros/ros.h"
#include "std_msgs/String.h"
#include "sensor_msgs/LaserScan.h"



void scanvalues(const sensor_msgs::LaserScan laser)
{
    ROS_INFO("size[%d]: ", laser.intensities.size());
    for (unsigned int i=0; i<laser.intensities.size();i++)
    {
        intensities[i] = laser.intensities[i];
        ROS_INFO("intens[%f]: ", intensities[i]);

    }
}
int main(int argc, char **argv)
{
  ros::init(argc, argv, "hLaserReader");
  ros::NodeHandle n;
  ros::Publisher hokuyo_publisher = n.advertise<std_msgs::String>("point", 1, scanvalues);
  ros::spin();
  return 0;
}
