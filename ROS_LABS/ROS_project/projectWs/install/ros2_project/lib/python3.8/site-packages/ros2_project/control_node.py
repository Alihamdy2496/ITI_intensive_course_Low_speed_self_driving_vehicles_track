#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from cutomsrv.srv import CustomSrv 
from turtlesim.msg import Pose 
import numpy as np
import time
import math
class my_node(Node):
    def __init__(self,node_name):
        super().__init__(node_name)
        self.obj_pub=self.create_publisher(Twist,"/turtle1/cmd_vel",10)
        self.obj_sub=self.create_subscription(Pose,"/turtle1/pose",self.call_back_subscription,10)
        self.create_service(CustomSrv,"CustomSrv",self.call_back_server)
        self.x=0.0
        self.y=0.0
        self.theta=0.0
        self.flag=False
        self.done=False
        self.out_theta=0.0
        self.out_r=0.0
        self.reqx=0.0
        self.reqy=0.0
        self.stillworking=False
        
    def call_back_server(self,req,rsp):
        if(self.stillworking== False):
            self.reqx=req.x
            self.reqy=req.y
            self.stillworking=True
            self.done=False


        self.get_logger().info("other node "+" "+str(self.reqx)+" "+" "+str(self.reqy))
        self.get_logger().info("my node "+str((self.theta/np.pi)*180)+" "+" "+str(self.x)+" "+" "+str(self.y)+" ")

        if(self.done == True ):
            rsp.ack=True
            self.stillworking=False
            self.flag =False 
            return rsp

        if(self.flag ==False):
            A = self.reqy - self.y
            B = self.reqx - self.x
            self.out_r = np.sqrt(A**2 + B**2)
            # self.out_theta = (np.arcsin(abs(A)/self.out_r))
            # if A > 0 and B < 0: #rob3 tany + 90
            #     self.out_theta+=(np.pi/2)
            # elif A < 0 and B > 0 :# rob3 rab3 + 270
            #     self.get_logger().info("rob333333333 333")
            #     self.out_theta-=(np.pi)
            # elif A < 0 and B < 0 :# rob3 talet + 180
            #     self.out_theta-=(np.pi/2)
            self.out_theta=math.atan2(A,B)
            self.flag =True 

        rsp.ack=False
        return rsp


    def call_back_subscription(self,msg):
        self.y=msg.y
        self.x=msg.x
        self.theta=msg.theta
        A = self.reqy - self.y
        B = self.reqx - self.x
        self.out_r_cur = np.sqrt(A**2 + B**2)

        if(self.flag==True):
            self.req_for_twist=Twist()
            self.get_logger().info("out theta "+str(self.out_theta*(180/np.pi)) +" mytheta "+ str(self.theta*(180/np.pi)))
            self.get_logger().info("out R "+str(self.out_r) +" my R "+ str(self.out_r_cur))
            if(  abs(self.out_theta - self.theta) > 0.005 ):
                self.req_for_twist.linear.x = 0.0
                self.req_for_twist.angular.z = ((self.out_theta)  - (self.theta))*1.5
                self.obj_pub.publish(self.req_for_twist)
            else:
                self.req_for_twist.linear.x = (self.out_r_cur)*0.8
                self.req_for_twist.angular.z = ((self.out_theta)  - (self.theta))*0.9
                self.obj_pub.publish(self.req_for_twist)
                if(self.out_r_cur<0.5):
                    self.get_logger().info("killlll")
                    self.flag =False 
                    self.done =True 


       

def main (args=None):
    rclpy.init(args=args)
    node1=my_node("control_node")


    rclpy.spin(node1)
    rclpy.shutdown()

if __name__ == "__main__":
    main()