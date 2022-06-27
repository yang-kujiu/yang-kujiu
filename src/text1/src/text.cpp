#include <ros/ros.h>
#include <trajectory_msgs/JointTrajectory.h>
#include "ros/time.h"

ros::Publisher arm_pub;

int setValeurPoint(trajectory_msgs::JointTrajectory* trajectoire,int pos_tab, int val);

int main(int argc, char** argv) {
    ros::init(argc, argv, "state_publisher");
    ros::NodeHandle n;
    arm_pub = n.advertise<trajectory_msgs::JointTrajectory>("/arm_controller/command",1);
    ros::Rate loop_rate(10);

    trajectory_msgs::JointTrajectory traj;
    trajectory_msgs::JointTrajectoryPoint points_n;

    traj.header.frame_id = "base_link";
    traj.joint_names.resize(6);
    traj.points.resize(1);

    traj.points[0].positions.resize(6);



   traj.joint_names[0] ="shoulder_pan_joint";
   traj.joint_names[1] ="shoulder_lift_joint";
    traj.joint_names[2] ="elbow_joint";
   traj.joint_names[3] ="wrist_1_joint";
   traj.joint_names[4] ="wrist_2_joint";
   traj.joint_names[5] ="wrist_3_joint";


    float i(1.0);
   float  k[6]={0,0,0,0,0,0};
    while(ros::ok()) {

            traj.header.stamp = ros::Time::now();

            for(int j=0; j<6; j++) {
               k [5]=3*cos(i/30);
                   ROS_INFO("val=%lf",k);
                    setValeurPoint(&traj,j,k[j]);
            }

            traj.points[0].time_from_start = ros::Duration(1);
            ROS_INFO("i=%lf",i);
            arm_pub.publish(traj);
            ros::spinOnce();

            loop_rate.sleep();
            i++;
            if (i>100)
            {
              i=-100;
            }
            
    }

    return 0;
}

int setValeurPoint(trajectory_msgs::JointTrajectory* trajectoire,int pos_tab, int val){
    trajectoire->points[0].positions[pos_tab] = val;
    return 0;
}
