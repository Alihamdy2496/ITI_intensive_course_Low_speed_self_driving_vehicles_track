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
        self.theta_prev=0.0
        self.theta_prev2=0.0
        self.factor=0.0
        self.theta_counter=0
        self.flag=False
        self.done=False
        self.out_theta=0.0
        self.out_theta_prev=0.0
        self.out_theta_prev2=0.0
        self.out_theta_counter=0
        self.out_r=0.0
        self.reqx=0.0
        self.reqy=0.0
        self.stillworking=False
        self.out_r_cur=0.0
        self.out_r_prev=0.0
        self.out_r_sum=0.0
        self.out_r_setpoint=0.0
        self.first_x=0.0
        self.first_y=0.0

    def call_back_server(self,req,rsp):
        if(self.stillworking== False):
            self.reqx=req.x
            self.reqy=req.y
            self.first_x=self.x
            self.first_y=self.y
            A = self.reqy - self.first_y
            B = self.reqx - self.first_x
            self.out_r_setpoint=np.sqrt(A**2 + B**2)
            self.get_logger().info("out_r_setpoint"+str(self.out_r_setpoint))
            self.get_logger().info("first_x"+str(self.first_x)+" first_y "+str(self.first_y))

            self.stillworking=True
            self.done=False
            self.flag=True

        if(self.done == True ):
            rsp.ack=True
            self.stillworking=False
            self.flag =False 
            return rsp

        rsp.ack=False
        return rsp


    def call_back_subscription(self,msg):
        self.y=msg.y
        self.x=msg.x
        if(self.flag==True):

            self.theta_prev2=self.theta_prev
            self.theta_prev=self.theta
            self.theta=msg.theta
            A = self.first_y - self.y
            B = self.first_x - self.x
            self.out_r_prev = self.out_r_cur
            self.out_r_sum += self.out_r_cur
            self.out_r_cur = self.out_r_setpoint - np.sqrt(A**2 + B**2)
            self.get_logger().info("out_r_curr"+str(self.out_r_cur))

            self.out_theta_prev2=self.out_theta_prev
            self.out_theta_prev = self.out_theta
            C = self.reqy - self.y
            D = self.reqx - self.x
            self.out_theta = math.atan2(C,D)

            if(self.out_theta < 0  ):
                #self.get_logger().info("----------------sign change------------------")
                self.out_theta += 2* np.pi

            if(self.theta < 0):
                #self.get_logger().info("----------------sign change------------------")
                self.theta += 2* np.pi

            self.out_theta += 2* np.pi*self.out_theta_counter
            self.theta += 2* np.pi*self.theta_counter
            #self.get_logger().info(str(self.out_theta_counter))
            #self.get_logger().info(str(self.theta_counter))

            #self.get_logger().info("------")
            #self.get_logger().info("my margin "+ str(2*np.pi - abs(self.factor)))

            #self.get_logger().info(str(self.out_theta*(180/np.pi))+" "+ str(self.out_theta_prev*(180/np.pi)))
            #self.get_logger().info(str(self.theta*(180/np.pi))+" "+ str(self.theta_prev*(180/np.pi)))

            if((self.theta_prev - self.theta )>2*np.pi - abs( self.factor )):# theta 360 > 0
                #self.get_logger().info("0000")
                self.theta += 2* np.pi
                self.theta_counter+=1

            if((self.theta - self.theta_prev) > 2*np.pi - abs( self.factor )):
                #self.get_logger().info("1111")
                self.theta -= 2* np.pi
                self.theta_counter-=1

            if((self.out_theta_prev - self.out_theta) > 2*np.pi - abs( self.factor ) ):
                #self.get_logger().info("2222")
                self.out_theta += 2* np.pi
                self.out_theta_counter+=1

            if((self.out_theta - self.out_theta_prev) > 2*np.pi - abs( self.factor ) ):
                #self.get_logger().info("3333")
                self.out_theta -= 2* np.pi
                self.out_theta_counter-=1

            KP=4.0
            KI=0.001
            KD=10.0
            self.req_for_twist=Twist()
            if(self.out_r_cur > 0.01):
                self.req_for_twist.linear.x = (self.out_r_cur)*KP + (self.out_r_cur + self.out_r_sum) * KI + (self.out_r_cur - self.out_r_prev) *KD
                self.req_for_twist.angular.z = ((self.out_theta)  - (self.theta))*5.0
                self.factor = ((self.out_theta)  - (self.theta))*0.5
                self.obj_pub.publish(self.req_for_twist)
            else:
                self.out_theta=0
                self.out_theta_counter=0
                while(self.theta > 2*np.pi):
                    self.theta -= 2*np.pi
                    self.theta_counter-=1

                while(self.theta < 0):
                    self.theta += 2*np.pi
                    self.theta_counter+=1

                #self.get_logger().info("----------------done with this turtle ------------------")
                #self.get_logger().info(str(self.theta*(180/np.pi))+" "+ str(self.out_theta*(180/np.pi)))
                #self.get_logger().info("----------------done with this turtle ------------------")

                self.flag =False 
                self.done =True 



       

def main (args=None):
    rclpy.init(args=args)
    node1=my_node("control_node")


    rclpy.spin(node1)
    rclpy.shutdown()

if __name__ == "__main__":
    main()
