import pandas as pd
import numpy as np
import time
""" pandas have two type of data structure series and dataframe 
    series is a one dimensional array with indexes it stores a single column or row of data
    dataframe is a tabular speradsheet like structure representing rows each of which contains one or multiple columns
"""
# # arr1=np.array([1,2,3,4]) #array take only one argument list
# # arr2=np.array([[1,2,3],[3,4,5]])
# # print("1d array",arr1)
# # print("\n")
# # print("element wise multiplication of arr",arr1*2) #ny this is elemental multiplication of array
# # start=time.time()
# # py_list=[1,2,3,4,5]
# # py_list=[i*2 for i in range(1000000)]
# # print("operation time : " ,time.time()-start,"\n")
# # #print(py_list)
# # start=time.time()
# # np_arr=np.arange(100000)*2
# # print("operation time:",time.time()-start,"\n")

# #creating arrays from scratch


# zeros=np.zeros((5,5)) #creating zero matrix of order 5X5
# #print(zeros,"\n")
# one=np.ones((4,4)) # creating ones matrix
# #print(one,"\n")
# full=np.full((3,3),7) #creating a matrix of constant element
# #print(full,"\n")
# random=np.random.random((2,3)) # creating a matrix of random element
# #print(random,"\n")
# sequence=np.arange(0,10) # creating a sequence array
# #print(sequence,"\n")

# #creating vectors matrix and tensor

# vector=np.array([1,2,3])
# #print(vector,"\n")
# matrix=np.array([[1,2,3],[4,5,6]])
# #print(matrix,"\n")
# tensor=np.array([[[1,2],[3,4]],[[5,6],[7,8]],[[9,10],[11,12]]]) # multidimensional arrays or tensor
# #print(tensor,"\n")


# # arry properties
# array=np.array([[1,2,3],
#                 [4,5,6]])
# # print("shape",array.shape)
# # print("dimension",array.ndim)
# # print("size/total no of elements",array.size)
# # print("datatype",array.dtype)

# #array reshaping

# array=np.arange(12)
# # print(array,"\n")
# reshaped=array.reshape((3,4))
# # print("reshaped : ",reshaped,"\n")
# flaten=reshaped.flatten()
# # print(flaten ,"flatened aarray")
# transpose=reshaped.T
# # print("tranpose matrix : ",transpose,"\n")

# arr=np.array([1,2,3,4,5,6,7,8,9,10])
# print("basic slicing", arr[2:8])
# print("with step ", arr[2:8:2])

#arr=np.array([[1,2,3],[4,5,6],[7,8,9]])
#print("specific element", arr[0][2])
#print("entire row", arr[0])
#print("entire column",arr[:][1])

#sorting
#arr=np.array([1,5,2,3,6,4,8])
#print("unsorted array",arr)
# for i in range (arr.size-1):
#     for j in range(i+1, arr.size):
#         if(arr[i]>arr[j]):
#             store=arr[i]
#             arr[i]=arr[j]
#             arr[j]=store
#sort=np.sort(arr)
# print("sorted array", sort)
unsorted=np.array([[1,6,2,0],[4,8,7,9],[9,1,2,6]])
print("sorted matrix by column",np.sort(unsorted,axis=0))
print("sorted matrix by row",np.sort(unsorted,axis=1))
unsorted=np.sort(unsorted,axis=0)
unsorted=np.sort(unsorted,axis=1)
print("completly sorted array by row and column",unsorted)


    