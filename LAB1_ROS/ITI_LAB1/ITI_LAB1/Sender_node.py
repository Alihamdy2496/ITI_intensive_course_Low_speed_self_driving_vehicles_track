#!/usr/bin/env python3

import rclpy
from rclpy.node import Node 
from example_interfaces.msg  import String
count = 0

class new_node_class(Node):

    def __init__(self,node_name):
        super().__init__(node_name)
        self.get_logger().info("Sender_node has started")
        self.obj_pub=self.create_publisher(String,"message_topic",10)
        self.obj_sub=self.create_subscription(String,"Reset_topic",self.call_back,10)
        self.create_timer(1,self.timer_call)

    def call_back(self,msg):
        global count
        count=0


    def timer_call(self):
        global count
        msg=String()
        msg.data="ali hamdy has published ," + str(count)
        #self.get_logger().info('''"ali hamdy has published ,'''+str(count)+'''" message has beeb published on message_topic''')#optional line for demonstration
        self.obj_pub.publish(msg)
        count+=1




def main (args=None):
    rclpy.init(args = args)
    node=new_node_class("Sender_node")

    rclpy.spin(node)

    rclpy.shutdown()   

if __name__=="__main__":
    main()