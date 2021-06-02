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

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Imu
import numpy as np

class my_node(Node):
    def __init__(self,node_name):
        super().__init__(node_name)
        self.obj_sub=self.create_subscription(Imu,"/imu",self.call_back_subscription,10)

 
    def call_back_subscription(self,msg):#2<x<8 and 2<y<8.
        roll, pitch, yaw=self.euler_from_quaternion(msg.orientation)
        linear_acceleration_x=msg.linear_acceleration.x
        angular_velocity_z=msg.angular_velocity.z

        if(yaw > -2 and yaw < 2):
            self.get_logger().info("The robot is nearly heading north .. Heading is: {} degrees".format(yaw))
        
        if(abs(linear_acceleration_x) > 0.3 ):# Accelerations should be in m/s^2 (not in g's), and rotational velocity should be in rad/sec
            self.get_logger().warning("Warning !! .. linear acceleration x exceeded the limit . Current acceleration is {} m/s^2".format(linear_acceleration_x))

        if(abs(angular_velocity_z) > 0.3 ):# Accelerations should be in m/s^2 (not in g's), and rotational velocity should be in rad/sec
            self.get_logger().warning("Warning !! .. angular velocity z exceeded the limit . Current Angular velocity is {} rad/sec".format(angular_velocity_z))

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
        
        return roll, pitch, yaw 


def main (args=None):
    rclpy.init(args=args)
    node1=my_node("task1")


    rclpy.spin(node1)
    rclpy.shutdown()

if __name__ == "__main__":
    main()