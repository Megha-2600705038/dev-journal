#without numpy

A = [[7,2,1],[8,3,6],[7,9,2]]
B = [9,10,1]
X = [0,0,0]
n = 5

for k in range(n):
    for i in range(3):
        s = 0
        for j in range(3):
            s += A[i][j] * X[j]

        X[i] = (B[i] - s) / A[i][j]
    
    print("Iteration ",k+1," : ",X)
print("\nSolution : ",X)
