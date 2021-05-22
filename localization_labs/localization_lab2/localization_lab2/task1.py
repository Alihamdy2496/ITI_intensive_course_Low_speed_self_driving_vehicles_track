#!/usr/bin/env python3

# This represents an estimate of a position and velocity in free space.
# The pose in this message should be specified in the coordinate frame given by header.frame_id
# The twist in this message should be specified in the coordinate frame given by the child_frame_id

""" # Includes the frame id of the pose parent.
std_msgs/Header header

# Frame id the pose points to. The twist is in this coordinate frame.
string child_frame_id

# Estimated pose that is typically relative to a fixed world frame.
geometry_msgs/PoseWithCovariance  (1)
--------------------------------------------------------------->>>
# This represents a pose in free space with uncertainty.

Pose pose (2)
------------------------------------------------------------------------------------------>>>
# A representation of pose in free space, composed of position and orientation. 
Point position (3)
------------------------------------------------------------------------------------------------------->>>
# This contains the position of a point in free space
float64 x
float64 y
float64 z
------------------------------------------------------------------------------------------------------->>>
Quaternion orientation
------------------------------------------------------------------------------------------------------->>>
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w
------------------------------------------------------------------------------------------------------->>>
------------------------------------------------------------------------------------------>>>

# Row-major representation of the 6x6 covariance matrix
# The orientation parameters use a fixed-axis representation.
# In order, the parameters are:
# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)
float64[36] covariance
--------------------------------------------------------------->>>

# Estimated linear and angular velocity relative to child_frame_id.
geometry_msgs/TwistWithCovariance twist """


import rclpy
from rclpy.node import Node
from nav_msgs.msg import Odometry
from geometry_msgs.msg import Quaternion
import numpy as np
import csv


class my_node(Node):
    def __init__(self,node_name):
        super().__init__(node_name)
        self.obj_sub=self.create_subscription(Odometry,"odom",self.call_back_subscription,10)
        self.pose_x=[]
        self.pose_y=[]
        self.yaw=[]
        self.index=3
        self.robot_x=0.0
        self.robot_y=0.0
        self.robot_yaw=0.0

        with open("/home/ali/Engineering/ITI/low_speed_self_driving_vehicles/ROS_lectures/GWS/src/localization_lab2/localization_lab2/pose.csv",'r', newline='') as csvfile:
            csvread = csv.reader(csvfile, delimiter=',')
            next(csvread)
            for row in csvread:
                self.pose_x.append(float(row[0]))
                self.pose_y.append(float(row[1]))
                self.yaw.append(float(row[2]))


    def call_back_subscription(self,msg):
        prev_robot_x = self.robot_x
        prev_robot_y = self.robot_y
        prev_robot_yaw = self.robot_yaw
        self.robot_x = msg.pose.pose.position.x 
        self.robot_y = msg.pose.pose.position.y
        robot_roll, robot_pitch, self.robot_yaw = self.euler_from_quaternion(msg.pose.pose.orientation) 
  
        if( abs(prev_robot_x - self.robot_x) > 0.001 or abs(prev_robot_y - self.robot_y) > 0.001 or abs(prev_robot_yaw - self.robot_yaw) > 2 ): 
            self.get_logger().info("current postion : x={0}, y={1}, yaw={2}".format(self.robot_x,self.robot_y,self.robot_yaw))
            self.get_logger().info("go to postion {0}: x={1}, y={2}, yaw={3}".format(self.index+1,self.pose_x[self.index],self.pose_y[self.index],self.yaw[self.index]))

        if abs((self.robot_x-self.pose_x[self.index]) <= 0.5 and abs(self.robot_y-self.pose_y[self.index]) <=0.5 and abs(self.robot_yaw-self.yaw[self.index]) <= 30 ):
            self.get_logger().info("-------------------------------------------------------------------------------")
            self.get_logger().info("--------------postion {0}: x={1}, y={2}, yaw={3} has been reached--------------".format(self.index+1,self.pose_x[self.index],self.pose_y[self.index],self.yaw[self.index]))
            self.get_logger().info("--------------postion {0}: x={1}, y={2}, yaw={3} has been reached--------------".format(self.index+1,self.pose_x[self.index],self.pose_y[self.index],self.yaw[self.index]))
            self.get_logger().info("--------------postion {0}: x={1}, y={2}, yaw={3} has been reached--------------".format(self.index+1,self.pose_x[self.index],self.pose_y[self.index],self.yaw[self.index]))
            self.get_logger().info("postion {0}: has been reached with tolerence 0.5m in x & y and 60 degree in yaw".format(self.index+1))
            self.get_logger().info("-------------------------------------------------------------------------------")
            self.index+=1
            if(self.index==4):
                self.index=1



    def euler_from_quaternion(self, quaternion):
        x = quaternion.x
        y = quaternion.y
        z = quaternion.z
        w = quaternion.w
        sinr_cosp = 2 * (w * x + y * z)
        cosr_cosp = 1 - 2 * (x * x + y * y)
        roll = np.arctan2(sinr_cosp, cosr_cosp)
        sinp = 2 * (w * y - z * x)
        pitch = np.arcsin(sinp)
        siny_cosp = 2 * (w * z + x * y)
        cosy_cosp = 1 - 2 * (y * y + z * z)
        yaw = np.arctan2(siny_cosp, cosy_cosp)
        
        return roll *180 /np.pi , pitch *180 /np.pi , yaw *180 /np.pi


def main (args=None):
    rclpy.init(args=args)
    node1=my_node("task1")


    rclpy.spin(node1)
    rclpy.shutdown()

if __name__ == "__main__":
    main()