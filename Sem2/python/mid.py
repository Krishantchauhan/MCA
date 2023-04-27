import datetime
now = datetime.datetime.now()
print ("Current date and time : ") 
print (now.strftime("%Y-%m-%d %H:%M:%S")) 


from math import pi
r = float(input ("Input the radius of the circle : "))
print ("The area of the circle with radius " + str(r) + " is: " + str(pi * r**2)) 

fname = input("Input your First Name : ") 
lname = input("Input your Last Name : ") 
print ("Hello " + lname + " " + fname) 

color_list = ["Red","Green","White" ,"Black"] 
color_list = ["Red","Green","White" ,"Black"] 
print( "%s %s"%(color_list[0],color_list[:-1])) 


a = int(input("Input an integer : ")) 
n1 = int( "%s" % a )
n2 = int( "%s%s" % (a,a) )
n3 = int( "%s%s%s" % (a,a,a) ) 
print (n1+n2+n3) 



import numpy as np
arr = np.array([1, 2, 3, 4, 5]) 
print(arr)
print(type(arr)) 

import numpy as np 
arr = np.array([[1, 2, 3], [4, 5, 6]]) 
print(arr) 

import numpy as np 
a = np.array(42)
b = np.array([1, 2, 3, 4, 5])
c = np.array([[1, 2, 3], [4, 5, 6]]) 
d = np.array([[[1, 2, 3], [4, 5, 6]], [[1, 2, 3], [4, 5, 6]]]) 
print(a.ndim) 
print(b.ndim) 
print(c.ndim) 
print(d.ndim) 


import numpy as np 
arr = np.array([[1,2,3,4,5], [6,7,8,9,10]]) 
print('2nd element on 1st row: ', arr[0, 1]) 

import numpy as np 
arr = np.array([[1,2,3,4,5], [6,7,8,9,10]]) 
print('5th element on 2nd row: ', arr[1, 4]) 

import scipy as sp 
import numpy as np 
nums=np.random.randint(1,20,size=(1,18))[0] 

print("Data :", nums)
"""get descriptive stats """
print("Mean :",sp.mean(nums)) 
print("Median :",sp.median(nums))

from scipy import stats, optimize, interpolate 
print("Mode :",sp.stats.mode(nums)) 
print('standard deviation',sp.std(nums))
print('variance',sp.var(nums)) 
print('Skew',sp.stats.skew(nums)) 
print('Kurtosis',sp.stats.kurtosis(nums)) 