#!/usr/bin/env python3

import rclpy
from rclpy.node import Node 
from example_interfaces.msg  import String

class new_server(Node):

    def __init__(self,node_name):
        super().__init__(node_name)
        self.get_logger().info("receiver_node has started")
        self.obj_sub=self.create_subscription(String,"topic",self.call_back_subscription,10)



    def call_back_subscription(self,msg):
        self.get_logger().info("i head : " + msg.data)



def main (args=None):
    rclpy.init(args = args)
    node=new_server("receiver_node")

    rclpy.spin(node)

    rclpy.shutdown()   

if __name__=="__main__":
    main()