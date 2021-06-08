#!/usr/bin/env python3

import rclpy
import numpy as np
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
from geometry_msgs.msg import Twist
from carkyo_msgs.msg import CameraEmergency

class my_node (Node):
    def __init__(self):
        super().__init__("perception_lab2")
        self.get_logger().info("perception_lab2 node has started")
        self.create_subscription(LaserScan,"scan",self.scan_cb, rclpy.qos.qos_profile_sensor_data)
        self.create_subscription(CameraEmergency,"/CameraEmergency",self.camera_cb,10)
        self.create_subscription(Twist,"key_cmd_vel",self.call_back_cmd_vel,10)
        self.obj_pub = self.create_publisher(Twist,"cmd_vel",10)
        self.min_distance=0.7
        self.laser_collision_flag=False
        self.camera_collision_flag=False
        self.I_cmd_vel = False
        self.b_cmd_vel = False 

    def camera_cb(self,msg):
        if( msg.close_obstacle_detected==True ):
            self.camera_collision_flag=True
            print("camera_collision_flag = True")
            print("camera distance = "+str(msg.min_distance))
        else:
            self.camera_collision_flag=False

        pub_msg=Twist()
        # we fuse them using anding
        if(( self.laser_collision_flag == True and self.camera_collision_flag == True ) and self.b_cmd_vel== True ):
            pub_msg.linear.x, pub_msg.linear.y, pub_msg.linear.z = -0.5, 0.0, 0.0
            pub_msg.angular.x, pub_msg.angular.y, pub_msg.angular.z = 0.0 ,0.0 ,0.0
            self.obj_pub.publish(pub_msg) 

        if(( self.laser_collision_flag == True and self.camera_collision_flag == True ) and self.I_cmd_vel == True): 
            pub_msg.linear.x, pub_msg.linear.y, pub_msg.linear.z = 0.0, 0.0, 0.0
            pub_msg.angular.x, pub_msg.angular.y, pub_msg.angular.z = 0.0, 0.0, 0.0
            self.obj_pub.publish(pub_msg) 

    def call_back_cmd_vel(self,msg):
        if(msg.linear.x > 0.0  and msg.angular.z == 0.0):
            self.I_cmd_vel = True
            self.b_cmd_vel = False

        if(msg.linear.x < 0.0  and msg.angular.z == 0.0):
            self.b_cmd_vel = True 
            self.I_cmd_vel = False


        pub_msg=Twist()
        if(self.laser_collision_flag==False and self.camera_collision_flag==False):
            pub_msg.linear.x, pub_msg.linear.y, pub_msg.linear.z = msg.linear.x, msg.linear.y, msg.linear.z
            pub_msg.angular.x, pub_msg.angular.y, pub_msg.angular.z = msg.angular.x, msg.angular.y, msg.angular.z

        if( ( self.laser_collision_flag == True and self.camera_collision_flag == True )and self.b_cmd_vel== True ):
            pub_msg.linear.x, pub_msg.linear.y, pub_msg.linear.z = msg.linear.x, msg.linear.y, msg.linear.z
            pub_msg.angular.x, pub_msg.angular.y, pub_msg.angular.z = msg.angular.x, msg.angular.y, msg.angular.z

        if(( self.laser_collision_flag == True and self.camera_collision_flag == True ) == True and self.I_cmd_vel== True): 
            pub_msg.linear.x, pub_msg.linear.y, pub_msg.linear.z = 0.0, 0.0, 0.0
            pub_msg.angular.x, pub_msg.angular.y, pub_msg.angular.z = 0.0, 0.0, 0.0

        self.obj_pub.publish(pub_msg)

    def scan_cb(self,msg):
        laser_data = msg.ranges
        angles=[a for a in range(360-65,360,1)]+[a for a in range(0,66,1)]
        for angle in angles:
            if( laser_data[int(angle)] < ( self.min_distance ) ):
                self.laser_collision_flag=True
                print("laser_collision_flag = True")
                break
            else:
                self.laser_collision_flag=False

        pub_msg=Twist()
        if(( self.laser_collision_flag == True and self.camera_collision_flag == True ) and self.b_cmd_vel== True ):
            pub_msg.linear.x, pub_msg.linear.y, pub_msg.linear.z = -0.5, 0.0, 0.0
            pub_msg.angular.x, pub_msg.angular.y, pub_msg.angular.z = 0.0 ,0.0 ,0.0
            self.obj_pub.publish(pub_msg) 

        if(( self.laser_collision_flag == True and self.camera_collision_flag == True ) and self.I_cmd_vel == True): 
            pub_msg.linear.x, pub_msg.linear.y, pub_msg.linear.z = 0.0, 0.0, 0.0
            pub_msg.angular.x, pub_msg.angular.y, pub_msg.angular.z = 0.0, 0.0, 0.0
            self.obj_pub.publish(pub_msg) 

def main (args=None):
    rclpy.init(args=args)
    node=my_node()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__=="__main__":
    main()

