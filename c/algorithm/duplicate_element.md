```Algorithm

Algorithm duplicate elmenets(A,n)
A is an array with size n:

{
     for i in 1 to n do
         bool isDuplicate := false;
             for j in i+1 to n do
                 if A[i] ==A[j]
                     isDuplicat := true;
                     return 1;
     return 0;            
}
```
// Big o = n*n+1+1+1+1 = n2+4 = n2 = n =>O(n)
