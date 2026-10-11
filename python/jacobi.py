#Without numpy

A = [[10,-1,2],[-1,11,-1],[2,-1,10]]
B = [6,25,-11]
x = [0,0,0]
n = 10
for k in range (n):
    x_new = [0,0,0]
    for i in range(3):
        s = 0
        for j in range(3):
            if i != j:
                s += A[i][j] * x[j]
        x_new[i] = (B[i] - s) / A[i][j]
    x = x_new
    print("Iteration",k+1, ":",x)
    
print("\nFinal Solution : ",x)
