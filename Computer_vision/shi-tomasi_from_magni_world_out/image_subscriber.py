#!/usr/bin/env python3

import rclpy
import numpy as np
import math
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge, CvBridgeError
# OpenCV2 for saving an image
import cv2

# Instantiate CvBridge
bridge = CvBridge()

class my_node (Node):
    def __init__(self):
        super().__init__("sub_node")
        self.create_subscription(Image,"/intel_realsense_d435_depth/image_raw",self.img_cb, rclpy.qos.qos_profile_sensor_data)
        self.get_logger().info("image_subscriber_node has started")

    def nothing(self,x):
            pass
        
    def img_cb(self,message):
        cv2.namedWindow('Output')
        cv2.createTrackbar('maxCorners', 'Output', 25,50, self.nothing)
        cv2.createTrackbar('qualityLevel', 'Output', 1,100, self.nothing)
        cv2.createTrackbar('minDistance', 'Output', 10, 100, self.nothing)

        cv2_img = bridge.imgmsg_to_cv2(message, "bgr8")
        #cv2_img_r = cv2.resize(cv2_img, (480,620), interpolation = cv2.INTER_LINEAR)

        out = cv2_img.copy()
        gray = cv2.cvtColor(out,cv2.COLOR_BGR2GRAY)

        maxCorners = cv2.getTrackbarPos('maxCorners', 'Output')
        qualityLevel = cv2.getTrackbarPos('qualityLevel', 'Output')
        minDistance = cv2.getTrackbarPos('minDistance', 'Output')

        corners = cv2.goodFeaturesToTrack(gray,maxCorners,qualityLevel/100,minDistance)
        corners = np.int0(corners)
        for i in corners:
            x,y = i.ravel()
            cv2.circle(out,(x,y),3,255,-1)

        cv2.imshow('Output',out);
        k = cv2.waitKey(1)




          
def main (args=None):
    rclpy.init(args=args)
    node=my_node()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__=="__main__":
    main()


