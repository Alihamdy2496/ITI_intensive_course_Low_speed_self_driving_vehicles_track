#!/usr/bin/env python3

import rclpy
import numpy as np
from rclpy.node import Node
from geometry_msgs.msg import Twist
import serial
import time

class my_node (Node):
    def __init__(self):
        super().__init__("control_lab2_node")
        self.get_logger().info("control_lab2 node has started")
        self.obj_sub = self.create_subscription(Twist,"cmd_vel",self.call_back_cmd_vel,10)
        self.create_timer(1/10,self.timer_call)
        self.L=0.58
        self.Vr_setpoint=0.0
        self.Vl_setpoint=0.0
        self.error_l_accu=0.0
        self.error_r_accu=0.0
        self.error_l_prev=0.0
        self.error_r_prev=0.0
        self.vl_fb=0.0
        self.vr_fb=0.0
        self.serialcomm = serial.Serial('/dev/ttyACM7','9600')
        self.serialcomm.timeout = 1
        self.serialcomm.flush()
        time.sleep(1/100)
        
    def call_back_cmd_vel(self,msg):
        linear_x=msg.linear.x
        anglar_x=msg.angular.z
        self.Vr_setpoint = ( ( anglar_x * self.L ) / 2 )+ linear_x
        self.Vl_setpoint = linear_x - (( anglar_x * self.L ) / 2)

    def timer_call(self):
        self.error_l_prev=self.vl_fb
        self.error_r_prev=self.vr_fb
        temp=self.serialcomm.readline().decode('ascii').split(sep=',')
        self.vl_fb , self.vr_fb =float(temp[1]),float(temp[2])
        error_l = self.Vl_setpoint - self.vl_fb
        error_r = self.Vr_setpoint - self.vr_fb
        self.error_l_accu += error_l
        self.error_r_accu += error_r

        Kp=150.0
        Ki=30.00
        Kd=20.0

        Kp2=150.0
        Ki2=30.00
        Kd2=20.0
        if(self.error_r_accu > 255/Ki):
            self.error_r_accu=255/Ki
        elif(self.error_r_accu < -255/Ki):
            self.error_r_accu=-255/Ki

        if(self.error_l_accu > 255/Ki):
            self.error_l_accu=255/Ki
        elif(self.error_l_accu < -255/Ki):
            self.error_l_accu=-255/Ki
        
        out_l= error_l * Kp + self.error_l_accu * Ki + (self.vl_fb - self.error_l_prev) * Kd
        out_r= error_r * Kp2 + self.error_r_accu * Ki2 + (self.vr_fb - self.error_r_prev) * Kd2

        self.serialcomm.write("{},{}".format(out_l,out_r).encode())
        print("out:{},{}".format(self.Vl_setpoint,self.Vr_setpoint))
        print("fb:{},{}".format(self.vl_fb,self.vr_fb))

        #self.serialcomm.close()

def main (args=None):
    rclpy.init(args=args)
    node=my_node()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__=="__main__":
    main()

