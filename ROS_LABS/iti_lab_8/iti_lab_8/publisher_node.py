#!/usr/bin/env python3

import rclpy
from rclpy.node import Node 
from example_interfaces.msg  import String

class new_node_class(Node):

    def __init__(self,node_name):
        super().__init__(node_name)
        self.get_logger().info("publisher_node has started")
        self.obj_pub=self.create_publisher(String,"topic",10)
        self.create_timer(1,self.call_back)
        self.flag = True


    def call_back(self):
        msg=String()
        if(self.flag==True):
            msg.data="HI"
            self.flag=False
        else:
            msg.data="HELLO"
            self.flag=True
        self.get_logger().info("publisher_node is sending  : "+ msg.data)
        self.obj_pub.publish(msg)




def main (args=None):
    rclpy.init(args = args)
    node=new_node_class("publisher_node")

    rclpy.spin(node)

    rclpy.shutdown()   

if __name__=="__main__":
    main()