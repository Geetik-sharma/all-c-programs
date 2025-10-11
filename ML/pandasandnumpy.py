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
# unsorted=np.array([[1,6,2,0],[4,8,7,9],[9,1,2,6]])
# print("sorted matrix by column",np.sort(unsorted,axis=0))
# print("sorted matrix by row",np.sort(unsorted,axis=1))
# unsorted=np.sort(unsorted,axis=0)
# unsorted=np.sort(unsorted,axis=1)
# print("completly sorted array by row and column",unsorted)

#filtering of array
numbers=np.array([1,2,3,4,5,6,7,8,9,10])
# even_number=numbers[numbers%2==0]
# print(even_number)

#filter with mask(mask is expression which evaluate)
# mask=numbers>5
# print("numbers greater then 5",numbers[mask])

#where clause
#np.where()
# indices=[0,1,2]
# print("at indices",numbers[indices])
# where_result=np.where(numbers>5)
# print("where",numbers[where_result])
condition_array=np.where(numbers>5,"true","false") 

# np.where (<condition>,<block if condition is true>,<block if condition is false>)  and if false and true block is not given default the elements are returned
#print("condition array" , condition_array)

#adding and removing data

# arr1=np.array([1,2,3])
# arr2=np.array([4,5,6])
# print("sum of individual element of array : ",arr1+arr2)
# concatinate=np.concatenate((arr1,arr2))
# print("concatinated array is : ",concatinate)


#array compatibility
# arr1=np.array([1,2,3])
# arr2=np.array([4,5,6])
# arr3=np.array([7,8,9,10])

# print("compatibility of shapes : ",arr1.shape==arr2.shape)
# print("compatibility of shapes : ",arr1.shape==arr3.shape)


#addition of row and column in multidimentional array
# original=np.array([[1,2],[3,4]])
# newrow=np.array([5,6])
# with_new_row=np.vstack((original,newrow))  # vstack stack a new vertical(row) element to original array where 1st given argument is (jisme add karna hai) original array and second argument(jo add karna hai) new row element
# print("original : ", original)
# print("with new row : ",with_new_row)

# newcol=np.array([[7],[8]]) # hastack add new column
# with_new_Col=np.hstack((original,newcol))
# print("original : ", original)
# print("with new col : ",with_new_Col)

#delete operation
# arr=np.array([1,2,3,4])
# deleted=np.delete(arr,[2]) #this will delete the element at given index of it will also cal delete elements by start stop and step method
# print(deleted) #and deleted array will be stored not deleted element
