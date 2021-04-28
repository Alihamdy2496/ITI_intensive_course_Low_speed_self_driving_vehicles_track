#!/usr/bin/env python3

import rclpy
from rclpy.node import Node 
from example_interfaces.msg  import String

class new_node_class(Node):

    def __init__(self,node_name):
        super().__init__(node_name)
        self.get_logger().info("Resst_node has started")
        self.obj_pub_for_Reset = self.create_publisher(String,"Reset_topic",10)
        self.obj_pub_For_sending_counter = self.create_publisher(String,"counter_topic",10)
        self.obj_sub = self.create_subscription(String,"message_topic",self.call_back,10)
        



    def call_back(self,msg):
        recv=int(str(msg.data).split(sep=',')[1])
        msg=String()
        msg.data="the receieved counter " + str(recv)
        # self.get_logger().info("*************optional line for demonstration***********************")#optional line for demonstration
        # self.get_logger().info('''"ali hamdy has published ,'''+str(recv)+'''" message has beeb received on message_topic''')#optional line for demonstration
        # self.get_logger().info("the counter has been published on counter topic")#optional line for demonstration
        # self.get_logger().info("*********************optional line for demonstration***************")#optional line for demonstration
        self.obj_pub_For_sending_counter.publish(msg)

        if  recv== 5:
            msg=String()
            msg.data="RESET"
            self.obj_pub_for_Reset.publish(msg)



def main (args=None):
    rclpy.init(args = args)
    node=new_node_class("Reset_node")

    rclpy.spin(node)

    rclpy.shutdown()   

if __name__=="__main__":
    main()