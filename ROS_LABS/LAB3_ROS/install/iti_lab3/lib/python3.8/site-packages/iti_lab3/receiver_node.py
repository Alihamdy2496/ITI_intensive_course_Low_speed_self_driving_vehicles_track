#!/usr/bin/env python3

import rclpy
from rclpy.node import Node 
from mymsgsrv.msg import CustomMsg
from mymsgsrv.srv import CustomSrv
from example_interfaces.msg  import Int64

class new_server(Node):

    def __init__(self,node_name):
        super().__init__(node_name)
        self.create_service(CustomSrv,"server",self.call_back_server)
        self.obj_pub=self.create_publisher(Int64,"number_counter",10)
        self.obj_sub=self.create_subscription(CustomMsg,"number",self.call_back_subscription,10)
        self.var=0

    def call_back_server(self,req,rsp):
        req_reqq=req.reqq
        if(req_reqq==True):
            rsp.rspp="success"
            self.var=0
            self.get_logger().info(str(self.var))
            self.get_logger().info("reset successful")
        else:
            rsp.rspp="Fail"
            self.get_logger().info("reset not successful")
        
        return rsp


    def call_back_subscription(self,msg):
        self.get_logger().info("the node recived: 1->> "+msg.text+ " 2->> "+str(msg.value))
        msgg=Int64() 
        self.var+=5
        msgg.data=self.var
        self.get_logger().info(str(msgg.data))
        self.obj_pub.publish(msgg)



def main (args=None):
    rclpy.init(args = args)
    node=new_server("receiver_node")

    rclpy.spin(node)

    rclpy.shutdown()   

if __name__=="__main__":
    main()