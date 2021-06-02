#!/usr/bin/env python3

# This is a message to hold data from an IMU (Inertial Measurement Unit)
#
# Accelerations should be in m/s^2 (not in g's), and rotational velocity should be in rad/sec
#
# If the covariance of the measurement is known, it should be filled in (if all you know is the
# variance of each measurement, e.g. from the datasheet, just put those along the diagonal)
# A covariance matrix of all zeros will be interpreted as "covariance unknown", and to use the
# data a covariance will have to be assumed or gotten from some other source
#
# If you have no estimate for one of the data elements (e.g. your IMU doesn't produce an
# orientation estimate), please set element 0 of the associated covariance matrix to -1
# If you are interpreting this message, please check for a value of -1 in the first element of each
# covariance matrix, and disregard the associated estimate.

""" std_msgs/Header header

geometry_msgs/Quaternion orientation
float64[9] orientation_covariance # Row major about x, y, z axes

geometry_msgs/Vector3 angular_velocity
float64[9] angular_velocity_covariance # Row major about x, y, z axes

geometry_msgs/Vector3 linear_acceleration
float64[9] linear_acceleration_covariance # Row major x, y z """

from math import sin, cos, pi
from sensor_msgs.msg import Imu
from geometry_msgs.msg import Quaternion
import rclpy
from rclpy.node import Node
import numpy as np
import csv

g_units=9.8066 

class my_node(Node):
    def __init__(self,node_name):
        super().__init__(node_name)
        self.obj_pub=self.create_publisher(Imu,"zed2_imu",10)
        self.create_timer(1/30,self.call_back_timer)   
        self.index=0
        with open("/home/ali/Engineering/ITI/low_speed_self_driving_vehicles/ROS_lectures/GWS/src/localization_lab1/localization_lab1/imu_data.csv",'r', newline='') as csvfile:
            self.csvread = np.array(list(csv.reader(csvfile, delimiter=',')))


    def call_back_timer(self):
        imu=Imu()
        imu.header.frame_id="zed2_imu_link"
        imu.header.stamp= self.get_clock().now().to_msg()
        #____________________________________________________________________________________________________________________________
        # all non diagonal elements are zero bcz there is no cross correlation between roll pitch yaw
        # roll and pitch diagonal elements are small numbers bcz >>>> an assumption 
        # to make a variance of yaw depend on the yaw value >>> i though of the sigmoid function
        # https://www.desmos.com/calculator/f3htdmbcam

        #            MAX_VALUE_OF_VARIANCE
        # y  = ---------------------------------------
        #                 -RATE_OF_CHANGE(x-THRESHOLD_)
        #         1   +  e    
        # the THRESHOLD_ = 0.3
        # MAX_VALUE_OF_VARIANCE i don't know that but i put .5 just for the sake of experment 
        # RATE_OF_CHANGE the rate of the change around the THRESHOLD_ we ant this to be high i put 50 just for the sake of experment 
        MAX_VALUE_OF_VARIANCE = 0.5
        RATE_OF_CHANGE=50
        THRESHOLD_=0.3
        yaw= MAX_VALUE_OF_VARIANCE /( 1 + np.exp(-RATE_OF_CHANGE*( float(self.csvread[self.index,6])*pi/180 - THRESHOLD_ )))

        # or just use 0.1 as a high value when the angular z is > 0.3 and 0.001 as a low value when the angular z is < 0.3
        #if(float(self.csvread[self.index,6])*pi/180  > 0.3):
        #    yaw=0.1
        #else:
        #    yaw=0.001

        imu.orientation= self.quaternion_from_euler(0,0,float(self.csvread[self.index,6])*pi/180)
        
        imu.orientation_covariance = [0.01, 0.0, 0.0,
                                      0.0, 0.01, 0.0, 
                                      0.0, 0.0, yaw]
        #____________________________________________________________________________________________________________________________
        # all non diagonal elements are zero bcz there is no cross correlation angular velocity in x y z
        # x and y diagonal elements are small numbers bcz >>>> "very accurate angular velocity in x and y"
        # z digonal element is the same as yaw
        imu.angular_velocity.x =float(self.csvread[self.index,3])
        imu.angular_velocity.y =float(self.csvread[self.index,4])
        imu.angular_velocity.z =float(self.csvread[self.index,5])
        imu.angular_velocity_covariance=[0.01, 0.0, 0.0,
                                         0.0, 0.01, 0.0, 
                                         0.0, 0.0, yaw]
        #____________________________________________________________________________________________________________________________
        # all non diagonal elements are zero bcz there is no cross correlation between linear acceleration in x , y ,z
        # all diagonal elements are small numbers bcz >>>> "accurate linear acceleration in all directions"
        imu.linear_acceleration.x =float(self.csvread[self.index,0])*g_units
        imu.linear_acceleration.y =float(self.csvread[self.index,1])*g_units
        imu.linear_acceleration.z =float(self.csvread[self.index,2])*g_units
        imu.linear_acceleration_covariance=[0.01, 0.0, 0.0,
                                            0.0, 0.01, 0.0,
                                            0.0, 0.0, 0.01]

        self.obj_pub.publish(imu)

        self.index+=1
        if(self.index == self.csvread.shape[0]):
            self.index=0

    def quaternion_from_euler(self, roll, pitch, yaw):
        qx = sin(roll/2) * cos(pitch/2) * cos(yaw/2) - cos(roll/2) * sin(pitch/2) * sin(yaw/2)
        qy = cos(roll/2) * sin(pitch/2) * cos(yaw/2) + sin(roll/2) * cos(pitch/2) * sin(yaw/2)
        qz = cos(roll/2) * cos(pitch/2) * sin(yaw/2) - sin(roll/2) * sin(pitch/2) * cos(yaw/2)
        qw = cos(roll/2) * cos(pitch/2) * cos(yaw/2) + sin(roll/2) * sin(pitch/2) * sin(yaw/2)
        return Quaternion(x=qx, y=qy, z=qz, w=qw)

def main (args=None):
    rclpy.init(args=args)
    node1=my_node("task2")


    rclpy.spin(node1)
    rclpy.shutdown()

if __name__ == "__main__":
    main()