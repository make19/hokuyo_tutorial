#include <ros/ros.h>
#include<geometry_msgs/Point.h>

void pointCallback(const geometry_msgs::Point::ConstPtr& point_msg){
  ROS_INFO("i've got a point");
}

int main(int argc,char** argv){
  ros::init(argc, argv,"subscriber");
  ros::NodeHandle n;

  ros ::Subscriber hokuyoSubscriber =n.subscribe("point", 10, &pointCallback);

  ros ::spin();

  return 0;
}
