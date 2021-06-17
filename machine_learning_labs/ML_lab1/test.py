#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Thu Jun 17 01:53:19 2021

@author: ali
"""
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
from file1 import Linear_Regression_Implementaion_model
import time


x=(np.random.rand(10)*100).astype(np.float32)
y=(np.random.rand(10)*100).astype(np.float32)

z = 5 * x - 3*y + 7

m = 10 # training samples
n = 2  # number of features
#number of epochs = 1

output_vector=np.array([z])

Desgin_matrix=np.ones((m,n+1))

Desgin_matrix[:,1]= x # feature 1 (x1) is x
Desgin_matrix[:,2]= y # feature 1 (x1) is x
# assume initial weights that are bigger than 1 to speed up the model
#Theta_initial_values=np.array([7,5,-3])
Theta_initial_values=(np.random.rand(Desgin_matrix.shape[1],output_vector.shape[0])*5).astype(np.float32)

tic = time.time()
model_one = Linear_Regression_Implementaion_model(Desgin_matrix,
                                                  output_vector,
                                                  tolerance=0.01,
                                                  Theta_initial_values=Theta_initial_values,
                                                  learning_rate=0.00001,
                                                  number_of_iterations=10000000) 

model_one.Train_modle()
print("time taken = ",str(time.time()-tic)," sec")

x=(np.random.rand(3)*100).astype(np.float32)
y=(np.random.rand(3)*100).astype(np.float32)


h = model_one.Theta_values[0]  +  model_one.Theta_values[1] * x + model_one.Theta_values[2] * y
z = 5 * x - 3*y + 7

error= (np.sum(abs(np.true_divide(h-z, z)))/3) * 100

print("error = ",error," %")