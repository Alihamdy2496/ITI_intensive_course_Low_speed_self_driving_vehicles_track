#!/usr/bin/env python3
import rclpy
from rclpy.node import Node 
from example_interfaces.msg  import String

class new_node_class(Node):

    def __init__(self,node_name):
        super().__init__(node_name)
        self.get_logger().info("task1_node has started")
        self.obj_sub=self.create_subscription(String,"my_topic",self.call_back,rclpy.qos.qos_profile_sensor_data)
        self.var=0


    def call_back(self,msg):
        self.var+=1
        self.get_logger().info("Ali heard "+ str(msg.data) + " " +str(self.var)+" times")




def main (args=None):
    rclpy.init(args = args)
    node=new_node_class("task1_node")

    rclpy.spin(node)

    rclpy.shutdown()   

if __name__=="__main__":
    main()