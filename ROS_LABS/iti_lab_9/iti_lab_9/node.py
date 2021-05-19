#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from turtlesim.msg import Pose 
from turtlesim.srv import Spawn
from turtlesim.srv import Kill
from std_srvs.srv import Empty
from geometry_msgs.msg import Twist
import numpy as np
import time
import csv
import os
import subprocess

class my_node(Node):
    def __init__(self,node_name):
        super().__init__(node_name)
        self.obj_sub=self.create_subscription(Pose,"/turtle1/pose",self.call_back_subscription,10)
        self.obj_pub=self.create_publisher(Twist,"/turtle1/cmd_vel",10)
        self.create_timer(1,self.call_back_timer)
        self.client_kill_obj=self.create_client(Kill,"kill")
        self.client_spawn_obj=self.create_client(Spawn,"spawn")
        self.client_clear_obj=self.create_client(Empty,"clear")
        self.linear_x=[]
        self.angular_z=[]

        with open("/home/ali/Engineering/ITI/low_speed_self_driving_vehicles/ROS_lectures/GWS/src/iti_lab_9/iti_lab_9/turtle_commands.csv",'r', newline='') as csvfile:
            csvread = csv.reader(csvfile, delimiter=',')
            next(csvread)
            for row in csvread:
                self.linear_x.append(float(row[0]))
                self.angular_z.append(float(row[1]))
        self.index=0

    def call_back_timer(self):
        self.req_for_twist=Twist()
        self.req_for_twist.linear.x = self.linear_x[self.index]
        self.req_for_twist.angular.z = self.angular_z[self.index]
        self.obj_pub.publish(self.req_for_twist)
        self.index+=1
        if(self.index == len(self.linear_x) ):
            self.index=0

    def call_back_subscription(self,msg):#2<x<8 and 2<y<8.
        if msg.y < 2 or msg.y > 8 or msg.x < 2 or msg.x > 8:
            req_kill=Kill.Request()
            req_kill.name="turtle1"
            while self.client_kill_obj.wait_for_service(0.5) == False:# wait for 0.5 second
                self.get_logger().info("waiting for the server")

            future_obj=self.client_kill_obj.call_async(req_kill)
            future_obj.add_done_callback(self.call_back_for_kill)

            clear=Empty.Request()
            while self.client_clear_obj.wait_for_service(0.5) == False:# wait for 0.5 second
                self.get_logger().info("waiting for the server")

            future_obj=self.client_clear_obj.call_async(clear)
            future_obj.add_done_callback(self.call_back_for_clear)

            time.sleep(0.1)
            req_spawn=Spawn.Request() 
            req_spawn.x=5.544445
            req_spawn.y=5.544445
            req_spawn.name="turtle1"
            req_spawn.theta=0.0
            future_obj=self.client_spawn_obj.call_async(req_spawn)
            future_obj.add_done_callback(self.call_back_for_spawn)

    def call_back_for_spawn(self,response):
        pass
    def call_back_for_kill(self,response):
        pass
    def call_back_for_clear(self,response):
        pass

def main (args=None):
    rclpy.init(args=args)
    node1=my_node("node")


    rclpy.spin(node1)
    rclpy.shutdown()

if __name__ == "__main__":
    main()