#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.msg  import Int64
from example_interfaces.srv  import SetBool

class my_node(Node):
    def __init__(self,node_name):
        super().__init__(node_name)

        client=self.create_client(SetBool,"server")
        while client.wait_for_service(0.25)==False:
            self.get_logger().info("wating for server to start")

        request=SetBool.Request()
        request.data=True
        futur_obj=client.call_async(request)
        futur_obj.add_done_callback(self.future_call)

    def future_call(self,future_msg):
        if(future_msg.result().success==True):
            self.get_logger().info("done reset")
        

       

def main (args=None):
    rclpy.init(args=args)
    node1=my_node("reset_node")
    rclpy.spin(node1)
    rclpy.shutdown()

if __name__ == "__main__":
    main()