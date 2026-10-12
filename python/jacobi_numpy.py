#With numpy

import numpy as np
A = np.array([[10,-1,2],[-1,11,-1],[2,-1,10]], dtype=float)
B = np.array([6,25,-11], dtype=float)
x = np.zeros(3)
n = 10
for k in range(n):
    x_new = np.zeros(3)
    for i in range(3):
        s = 0
        for j in range(3):
            if i != j:
                s += A[i][j] * x[j]
        x_new[i] = (B[i] - s) / A[i][i]
    x = x_new
    print("Iteration", k+1,":",x)

print("\nFinal Solution : ",x)    

