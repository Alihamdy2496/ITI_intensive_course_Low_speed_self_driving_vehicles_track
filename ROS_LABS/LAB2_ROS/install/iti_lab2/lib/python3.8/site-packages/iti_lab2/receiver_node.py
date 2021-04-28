#!/usr/bin/env python3

import rclpy
from rclpy.node import Node 
from example_interfaces.msg  import Int64
from example_interfaces.srv  import SetBool

class new_server(Node):

    def __init__(self,node_name):
        super().__init__(node_name)
        self.create_service(SetBool,"server",self.call_back_server)
        self.obj_pub=self.create_publisher(Int64,"number_counter",10)
        self.obj_sub=self.create_subscription(Int64,"number",self.call_back_subscription,10)
        self.var=0

    def call_back_server(self,req,rsp):
        req_data=req.data
        rsp.success=True
        if(req_data==True):
            self.var=0
            self.get_logger().info("Done Reset and counter = 0")
        return rsp

    def call_back_subscription(self,msg):
        msg_to_send=Int64() 
        msg_to_send.data=self.var
        self.obj_pub.publish(msg_to_send)
        self.var+=msg.data
        self.get_logger().info("i got a data and the counter = "+str(self.var))



def main (args=None):
    rclpy.init(args = args)
    node=new_server("receiver_node")

    rclpy.spin(node)

    rclpy.shutdown()   

if __name__=="__main__":
    main()