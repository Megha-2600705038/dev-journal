```Algorithm

Algorith double-sum:
//A is an array with size n
 {
     sum := 0 =>1
     for i:=0 to n-1 do => n
         print A[i] = A[i]*2; => n-1
    
        for i:=0 to n-1 do => n-1+1
         sum := sum + A[i]; => n-1
     return sum; => 1
}

```

// Time complexity = 1+n+n-1+n+n-1+1 = 4 n + 0 = 4 n = O(n) 
// Space complexity = O(1)
