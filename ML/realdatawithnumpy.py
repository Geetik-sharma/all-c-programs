import numpy as np
import matplotlib.pyplot as plt

# Data structure: [restaurant_id, 2021, 2022, 2023, 2024]
sales_data = np.array([
    [1, 150000, 180000, 220000, 250000],  # Paradise Biryani
    [2, 120000, 140000, 160000, 190000],  # Beijing Bites
    [3, 200000, 230000, 260000, 300000],  # Pizza Hub
    [4, 180000, 210000, 240000, 270000],  # Burger Point
    [5, 160000, 185000, 205000, 230000]   # Chai Point
])
#basic operations
# print("===== saled analysis =====")
# print("sale data shape", sales_data.shape)
# print("sales data of first three resturant", sales_data[:3][:])
#print("total sale per year",np.sum(sales_data[:,1:],axis=0))


#minimum sales per resturant
# minimumsales=np.min(sales_data[:,1:],axis=1)
# print(minimumsales)

#maximum sales per year
# maximum=np.max(sales_data[:,1],axis=0)
# print("maximum sales in year 2021",maximum)
# maximum=np.max(sales_data[:,2],axis=0)
# print("maximum sales in year 2022",maximum)
# maximum=np.max(sales_data[:,3],axis=0)
# print("maximum sales in year 2023",maximum)

# # average sales per year
# avg=np.mean(sales_data[:,1:],axis=0)
# print("average sales per year",avg)

# #cumulative sales
# cumsum=np.cumsum(sales_data[:,1:],axis=1)
# print("cumulative sales : ", cumsum)
# plt.figure(figsize=(10,6))
# plt.plot(np.mean(cumsum , axis=0))
# plt.title("average cumulative sales per year across all resturant")
# plt.xlabel("years")
# plt.ylabel("sales")
# plt.grid(True)
# plt.show()

#vector work
# vector=np.array([1,2,3,4])
# vector1=np.array([5,6,7,8])
# vector_Addition=vector1+vector
# print("vector addition : ", vector_Addition,"\n")
# multiplication=vector*vector1
# print("multiplication of vecto",multiplication,"\n")
# print("dot product ",np.dot(vector,vector1),"\n")
# print("angle between vectors", np.arccos((np.dot(vector,vector1))/(np.linalg.norm(vector)*np.linalg.norm(vector1))))

# resturant_type=np.array(['biryani','chinese','indian','korean','desi_dhaba'])
# vectorized_upper=np.vectorize(str.upper)  # we can apply any python operation with numpy array by using vectorized operations
# print("vectorized upper",vectorized_upper(resturant_type))

#broadcast