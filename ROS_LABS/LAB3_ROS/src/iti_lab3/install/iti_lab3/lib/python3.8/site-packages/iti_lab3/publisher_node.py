#!/usr/bin/env python3

import rclpy
from rclpy.node import Node 
from mymsgsrv.msg import CustomMsg
from mymsgsrv.srv import CustomSrv

class new_node_class(Node):

    def __init__(self,node_name):
        super().__init__(node_name)
        self.get_logger().info("publisher_node has started")
        self.obj_pub=self.create_publisher(CustomMsg,"number",10)
        self.create_timer(1,self.call_back)



    def call_back(self):
        msg=CustomMsg() 
        msg.text="ali is publishing: 5"
        msg.value=5
        self.get_logger().info("publisher_node is sending  : "+" 1->> "+msg.text+ " 2->> "+str(msg.value))
        self.obj_pub.publish(msg)




def main (args=None):
    rclpy.init(args = args)
    node=new_node_class("publisher_node")

    rclpy.spin(node)

    rclpy.shutdown()   

if __name__=="__main__":
    main()