#!/usr/bin/env python3
import rclpy
from rclpy.node import Node 
import numpy as np
from example_interfaces.msg  import String
from nav_msgs.msg  import Path
from nav_msgs.msg  import Odometry

import time
class new_node_class(Node):

    def __init__(self,node_name):
        super().__init__(node_name)
        self.get_logger().info("planning_node has started")
        self.obj_pub=self.create_publisher(String,"message_topic",10)
        self.obj_sub = self.create_subscription(Path,"/local_plan",self.call_back,10)
        self.obj_sub = self.create_subscription(Odometry,"/odom",self.call_back_2,10)
        self.odom_yaw =0.0
        self.tunable=0 # max 
        self.error=0
        self.error_dot=0
        self.distance=0
        self.flag=True
    def call_back_2(self,msg):
        _,_,self.odom_yaw=self.euler_from_quaternion(msg.pose.pose.orientation)

    def call_back(self,msg):
        #calculate the line equation (ax+by+c=0) from point 0 to the last point
        self.tunable=int(len(msg.poses)-1)
        #print(self.tunable)
        if( int(len(msg.poses)) > 0 and (msg.poses[ self.tunable ].pose.position.x != msg.poses[ 0 ].pose.position.x) ):
            a = - ( msg.poses[ self.tunable ].pose.position.y - msg.poses[ 0 ].pose.position.y ) \
                / ( msg.poses[ self.tunable ].pose.position.x - msg.poses[ 0 ].pose.position.x )
            b = 1

            c = -(a * msg.poses[ 0 ].pose.position.x) + msg.poses[ 0 ].pose.position.y
            #calculate the distance between each point and that line
            prev_distance=self.distance
            self.distance=0
            for pos in range(0,self.tunable):
                self.distance= self.distance + abs( a * msg.poses[ pos ].pose.position.x + b * msg.poses[ pos ].pose.position.y + c ) / ( np.sqrt( a**2 + b**2 ) * self.tunable )
                #error_sign = 1 if (a * msg.poses[ pos ].pose.position.x + b * msg.poses[ pos ].pose.position.y + c) > 0 else -1


            prev_error=self.error
            self.error=abs(prev_distance-self.distance)
            self.error_dot=abs(prev_error-self.error)

            #print("---------------------------------------")
            #print("curve number =",self.distance)
            #print("total number of points ",len(msg.poses))
            #print("points in consideration ",self.tunable+1)
            #print("error ",self.error)
            #print("error_dot ",self.error_dot)
            sent_msg=String()
            _,_,yaw=self.euler_from_quaternion(msg.poses[ self.tunable ].pose.orientation)
            if(self.error > 0.06):
                print ("yaw",yaw)
                print ("odom_yaw",self.odom_yaw)
                if(self.odom_yaw-yaw > 0 ):
                    sent_msg.data="the car is turnning RIGHT"
                    print(">>>>>>>>>>>>>>>>>>the car is turnning RIGHT")

                else:
                    sent_msg.data="the car is turnning LEFT"
                    print(">>>>>>>>>>>>>>>>>>>>the car is turnning LEFT")
                self.flag=True
            else:
                if(self.flag==True):
                    print("the car is going straight")
                    self.flag=False
                sent_msg.data="the car is going straight"

            #time.sleep(1/100)
            sent_msg.data="ali hamdy has published ," + str(sent_msg)
            self.obj_pub.publish(sent_msg)

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
    rclpy.init(args = args)
    node=new_node_class("Reset_node")

    rclpy.spin(node)

    rclpy.shutdown()   

if __name__=="__main__":
    main()