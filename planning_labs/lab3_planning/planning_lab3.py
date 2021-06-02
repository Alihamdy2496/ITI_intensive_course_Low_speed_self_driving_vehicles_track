#!/usr/bin/env python3
import rclpy
from rclpy.node import Node 
from nav_msgs.msg  import Path
import numpy as np
from example_interfaces.msg  import String

class new_node_class(Node):

    def __init__(self,node_name):
        super().__init__(node_name)
        self.get_logger().info("planning_node has started")
        self.obj_pub=self.create_publisher(String,"message_topic",10)
        self.obj_sub = self.create_subscription(Path,"/plan",self.call_back,10)
        self.tunable=0 # max 
        self.error=0
        self.error_dot=0
        self.distance=0
    def call_back(self,msg):
        #calculate the line equation (ax+by+c=0) from point 0 to the last point
        self.tunable=int(len(msg.poses)/5)

        a = - ( msg.poses[ self.tunable ].pose.position.y - msg.poses[ 0 ].pose.position.y ) \
            / ( msg.poses[ self.tunable ].pose.position.x - msg.poses[ 0 ].pose.position.x )
        b = 1

        c = -(a * msg.poses[ 0 ].pose.position.x) + msg.poses[ 0 ].pose.position.y
        #calculate the distance between each point and that line
        prev_distance=self.distance
        self.distance=0
        for pos in range(0,self.tunable):
            self.distance= self.distance + abs( a * msg.poses[ pos ].pose.position.x + b * msg.poses[ pos ].pose.position.y + c ) / ( np.sqrt( a**2 + b**2 ) * self.tunable )
        
        prev_error=self.error
        self.error=abs(prev_distance-self.distance)
        self.error_dot=abs(prev_error-self.error)

        print("---------------------------------------")
        print("curve number =",self.distance)
        print("total number of points ",len(msg.poses))
        print("points in consideration ",self.tunable)
        print("error ",self.error)
        print("error_dot ",self.error_dot)
        print("---------------------------------------")
        sent_msg=String()
        if(self.error_dot > 0.13):
            print("the car is turnning")
            sent_msg.data="the car is turnning"

        else:
            print("the car is going straight")
            sent_msg.data="the car is going straight"

        sent_msg.data="ali hamdy has published ," + str(sent_msg)
        self.obj_pub.publish(sent_msg)



def main (args=None):
    rclpy.init(args = args)
    node=new_node_class("planning_node")

    rclpy.spin(node)

    rclpy.shutdown()   

if __name__=="__main__":
    main()
