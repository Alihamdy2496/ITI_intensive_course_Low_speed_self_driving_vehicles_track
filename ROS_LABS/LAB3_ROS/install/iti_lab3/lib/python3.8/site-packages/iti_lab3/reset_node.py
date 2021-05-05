#!/usr/bin/env python3

import rclpy
from rclpy.node import Node 
from mymsgsrv.srv import CustomSrv

class my_node(Node):
    def __init__(self,node_name):
        super().__init__(node_name)

        client=self.create_client(CustomSrv,"server")
        while client.wait_for_service(0.25)==False:
            self.get_logger().info("wating for server to start")

        request=CustomSrv.Request()
        request.reqq=True

        futur_obj=client.call_async(request)
        futur_obj.add_done_callback(self.future_call)

    def future_call(self,future_msg):
        self.get_logger().info("server response : "+ future_msg.result().rspp)
        

       

def main (args=None):
    rclpy.init(args=args)
    node1=my_node("reset_node")
    rclpy.spin(node1)
    rclpy.shutdown()

if __name__ == "__main__":
    main()