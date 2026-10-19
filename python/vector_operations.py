import numpy as np
# //code without using numpy:

vector1 = [1,2,3]
vector2 = [4,5,6]

vector_add = [x+y for x,y in zip(vector1,vector2)]
scalar_mul = [2*x for x in vector1]
vector_dot = sum(x * y for x,y in zip(vector1,vector2))

print("Vector Addition :",vector_add)
print("Scalar Multiplication :",scalar_mul)
print("Vector Dot Product :",vector_dot)

# //code using numpy:

vector_a = np.array([1,2,3])
vector_b = np.array([4,5,6])

addition_numpy = vector_a + vector_b
scalar_numpy = 2 * vector_a
dot_product_numpy = np.dot(vector_a , vector_b) 

print("Numpy Result :",addition_numpy)
print("Numpy Result :",scalar_numpy)
print("Numpy Result :",dot_product_numpy)
