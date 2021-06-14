#!/home/ali/anaconda3/bin/python3

import rclpy
import numpy as np
import math
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge, CvBridgeError
import time
import sys
sys.path.append('/home/ali/anaconda3/lib/python3.8/site-packages')

import cv2
print(cv2.__version__)
bridge = CvBridge()

class my_node (Node):
    def __init__(self):
        super().__init__("Computer_vision_project")
        self.create_subscription(Image,"/intel_realsense_d435_depth/image_raw",self.img_cb, rclpy.qos.qos_profile_sensor_data)
        self.get_logger().info("image_subscriber_node has started")
        self.cv2_img1 = np.zeros((240, 320, 3),dtype=np.uint8)
        self.x_vector=0.0
        self.pre1_x_vector=0.0
        self.pre2_x_vector=0.0
        self.pre3_x_vector=0.0
        self.pre4_x_vector=0.0
        self.pre5_x_vector=0.0
        self.pre6_x_vector=0.0
        self.pre7_x_vector=0.0
        self.pre8_x_vector=0.0
        self.pre9_x_vector=0.0
        self.pre10_x_vector=0.0     

    def nothing(self,x):
            pass
        
    def img_cb(self,message):
        cv2.namedWindow('Direction')
        orb = cv2.ORB_create()
        cv2_img2 = self.cv2_img1
        self.cv2_img1 = bridge.imgmsg_to_cv2(message, "bgr8")
        gray1 = cv2.cvtColor(self.cv2_img1,cv2.COLOR_BGR2GRAY)
        gray2 = cv2.cvtColor(cv2_img2,cv2.COLOR_BGR2GRAY)
        tic=time.time()
        keypoints_1, descriptors_1 = orb.detectAndCompute(gray1, None)
        keypoints_2, descriptors_2 = orb.detectAndCompute(gray2, None)

        if not ( np.array(descriptors_1).size ==0 or np.array(descriptors_2).size == 0 or np.array(descriptors_1).size > np.array(descriptors_2).size) :
            bf = cv2.BFMatcher(cv2.NORM_L1, crossCheck=True)
            matches = bf.match(descriptors_1,descriptors_2)
            pts1 = [keypoints_1[mat.queryIdx].pt for mat in matches] 
            pts2 = [keypoints_2[mat.trainIdx].pt for mat in matches]

            self.pre10_x_vector=self.pre9_x_vector
            self.pre9_x_vector=self.pre8_x_vector
            self.pre8_x_vector=self.pre7_x_vector
            self.pre7_x_vector=self.pre6_x_vector
            self.pre6_x_vector=self.pre5_x_vector
            self.pre5_x_vector=self.pre4_x_vector
            self.pre4_x_vector=self.pre3_x_vector
            self.pre3_x_vector=self.pre2_x_vector
            self.pre2_x_vector=self.pre1_x_vector
            self.pre1_x_vector=self.x_vector
            self.x_vector=0.0

            for i in range(0,len(pts1)):
                   self.x_vector  += (pts2[i][0] - pts1[i][0]) / len(pts1)

        D= (self.x_vector + self.pre1_x_vector + self.pre2_x_vector + self.pre3_x_vector  + self.pre4_x_vector\
            +self.pre5_x_vector+self.pre6_x_vector+self.pre7_x_vector+self.pre8_x_vector+self.pre9_x_vector+self.pre10_x_vector)/5
        toc=time.time()
        cv2.arrowedLine(self.cv2_img1, (160,10),(160+int(D),10),(0, 255, 0),6)
        #cv2.putText(self.cv2_img1, 'direction = '+str(x_vector), (15, 15), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 0, 0), 2, cv2.LINE_4)
        cv2.putText(self.cv2_img1, 'time taken = '+str(toc-tic)*1000+" mseconds", (15, 30), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 0, 0), 2, cv2.LINE_4)

        cv2.imshow('Direction',self.cv2_img1);
        k = cv2.waitKey(1)
        if k==27:
            cv2.destroyAllWindows()
            rclpy.shutdown()


          
def main (args=None):
    rclpy.init(args=args)
    node=my_node()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__=="__main__":
    main()


