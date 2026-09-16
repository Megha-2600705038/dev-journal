#with numpy

import numpy as np

A = np.array([[1,7,3],[4,9,2],[8,5,6]],dtype=float)
B = np.array([-10,4,1],dtype=float)
X = np.zeros(3)
n = 10

for k in range(n):
    for i in range(3):
        s = 0
        for j in range(3):
            
            if i!=j:
                s += A[i][j] * X[j]
        
        X[i] = (B[i] - s) / A[i][i]
    
    print("Iteration",k+1, " : ",X)

print('\nSolution : ',X)
