import rclpy
from rclpy.node import Node
from turtlesim.srv import Kill
from cutomsrv.srv import CustomSrv 
import numpy as np
import time
from turtlesim.srv import Spawn
#client
class new_server(Node):

    def __init__(self,node_name):
        super().__init__(node_name)
        self.client_kill_obj=self.create_client(Kill,"/kill")
        self.client_spawn_obj=self.create_client(Spawn,"spawn")
        self.client_obj=self.create_client(CustomSrv,"CustomSrv")
        self.create_timer(2,self.timer_call)
        self.turtle_name="new_turtle"
        self.flag=True

    def timer_call(self):
        req_spawn=Spawn.Request() 
        self.get_logger().info("5 seconds")
        req_spawn.x=float(np.random.rand(1))*8
        req_spawn.y=float(np.random.rand(1))*8
        req_spawn.name=self.turtle_name

        if(self.flag == True):
            self.get_logger().info("the generated turtle is at "+str(req_spawn.x)+" "+str(req_spawn.y))

            req_spawn.theta=float(np.random.rand(1))*np.pi
            while self.client_spawn_obj.wait_for_service(0.5) == False:# wait for 0.5 second
                self.get_logger().info("waiting for the server")

        future_obj=self.client_spawn_obj.call_async(req_spawn)
        future_obj.add_done_callback(self.call_back_for_spawn)
        time.sleep(1)

        req=CustomSrv.Request()
        req.x=req_spawn.x
        req.y=req_spawn.y
        self.get_logger().info("the pass generated turtle "+str(req.x)+" "+str(req.y))

        while self.client_obj.wait_for_service(0.5) == False:# wait for 0.5 second
            self.get_logger().info("waiting for the server")

        future_obj=self.client_obj.call_async(req)
        future_obj.add_done_callback(self.call_back)

    def call_back(self,response):
        self.flag=response.result().ack 
        if response.result().ack == True:  
            self.get_logger().info("True ack")
            req_kill=Kill.Request()
            req_kill.name=self.turtle_name

            while self.client_kill_obj.wait_for_service(0.5) == False:# wait for 0.5 second
                self.get_logger().info("waiting for the server")

            future_obj=self.client_kill_obj.call_async(req_kill)
            future_obj.add_done_callback(self.call_back_for_kill)
        else:
            
            self.get_logger().error("control node couldn't work")



    def call_back_for_spawn(self,response):
        self.get_logger().info(self.turtle_name +" created") 

    def call_back_for_kill(self,response):
        self.get_logger().info(self.turtle_name+ " killed")




def main (args=None):
    rclpy.init(args = args)
    node=new_server("spawn_node")
    rclpy.spin(node)


    rclpy.shutdown()   

if __name__=="__main__":
    main()