#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Thu Jun 17 01:51:57 2021

@author: ali
"""

import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import math
np.seterr(all='raise')  # define before your code.

class Linear_Regression_Implementaion_model:
    def __init__(self,
                 Desgin_matrix,
                 output_vector,
                 Theta_initial_values,
                 tolerance,
                 learning_rate=.009,
                 number_of_iterations=10000):

        self.Desgin_matrix=Desgin_matrix
        self.output_vector=output_vector
        self.learning_rate=learning_rate
        self.number_of_iterations=number_of_iterations
        self.Theta_values=Theta_initial_values
        self.tolerance=tolerance

        print("created a linear Regression model with\n",
              "Desgin_matrix= ",self.Desgin_matrix,
              "output_vector= ",self.output_vector,
              "learning_rate= ",self.learning_rate,
              "number_of_iterations= ",self.number_of_iterations,
              "Theta_values= ",self.Theta_values)
        
    def insert_Design_matrix(self,Desgin_matrix):
        self.Desgin_matrix=Desgin_matrix
        print('added the design matrix')

    def insert_Output_vector(self,output_vector):
        self.output_vector=output_vector
        print('added the output vector')
        
    def Modify_model_parameters(self,learning_rate,number_of_iterations):        
        self.learning_rate=learning_rate  
        self.number_of_iterations=number_of_iterations  

    
    def Train_modle(self):
        if(self.Desgin_matrix==[] or self.output_vector==[]):
            print("enter the design matrix and output vector\n",
                  "using the functions 'insert_Design_matrix' and 'insert_Output_vector'")
            
        number_of_training_samples=float(self.Desgin_matrix.shape[0])
        temp_for_x1=np.ones((self.Desgin_matrix.shape[0],1))
        temp_for_x2=np.ones((self.Desgin_matrix.shape[0],1))
        Cost=[]
        count=1
        
        for i in range(1,self.number_of_iterations+1):
            temp1=self.Desgin_matrix.dot(self.Theta_values)-self.output_vector
            temp_theta0 = self.Theta_values[0] -  self.learning_rate * (1/number_of_training_samples) * np.sum(temp1)
            temp_for_x1.T[0]= self.Desgin_matrix.T[1]
            temp2=( self.Desgin_matrix.dot(self.Theta_values)- self.output_vector)*temp_for_x1        
            temp_theta1 = self.Theta_values[1] - self.learning_rate * (1/number_of_training_samples) * np.sum(temp2)
            temp_for_x2.T[0]= self.Desgin_matrix.T[2]
            temp3=( self.Desgin_matrix.dot(self.Theta_values)- self.output_vector)*temp_for_x2
            temp_theta2 = self.Theta_values[2] - self.learning_rate * (1/number_of_training_samples) * np.sum(temp3)

            #if(abs(self.Theta_values[0]-temp_theta0)<self.tolerance and abs(self.Theta_values[1]-temp_theta1)< self.tolerance and abs(self.Theta_values[2]-temp_theta2)<self.tolerance):
            #    break  
                
            self.Theta_values[0]=temp_theta0
            self.Theta_values[1]=temp_theta1
            self.Theta_values[2]=temp_theta2 
            count+=1

            #cost function calculation
            temp1=(1/(2*number_of_training_samples))*(np.sum(self.Desgin_matrix.dot(self.Theta_values)-self.output_vector)**2)
            Cost.append(temp1)
            
        print('modle trained successfully \n',
              "h(x)=",self.Theta_values[0],"+",self.Theta_values[1],' x1 +',self.Theta_values[2],' x2')
            
        
        print("count",count)
        ax = plt.axes(projection='3d')
        # Data for a three-dimensional line
        X_axis=np.linspace(0,100,200)
        y_axis=np.linspace(0,100,200)
        h_my_out= self.Theta_values[0]  +  self.Theta_values[1] * X_axis + self.Theta_values[2] * y_axis
        z_equation= 5 * X_axis - 3*y_axis + 7
        ax.plot3D(X_axis, y_axis, h_my_out,label='my hypothesis ')
        ax.plot3D(X_axis, y_axis, z_equation,label='z = 5 * x - 3*y + 7')
        leg = ax.legend();
        xdata = self.Desgin_matrix[:,1].T 
        ydata = self.Desgin_matrix[:,2].T
        zdata = self.output_vector.T
        plt.ylabel('x')
        plt.xlabel('y');
        ax.scatter3D(xdata, ydata, zdata, cmap='hot');
        plt.title('training samples vs hypothesis and optimal output function Linear_Regression')

        
        plt.figure(2)
        X_axis=np.linspace(1,count,count-1)
        plt.plot(X_axis,Cost)
        plt.xlim(0,self.number_of_iterations)
        plt.title('Cost Function Linear_Regression')
        plt.ylabel('Cost function')
        plt.xlabel('#iterations');
                   
                   

                   
                 