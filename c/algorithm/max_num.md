```Algorithm

Algorithm maximum;
A is an array with size n:

{
    max_num := A[0]; => 1 time

     for i:= 0 to n-1 do =>n-1+1 time
          if max_num < A[i] then => n-1 time 
             max_num := A[i];=> n-1 time 
     return max_num;=> 1 time 
}

```

//Total step count = n+5 
// Time Complexity = O(n)
// space complexity = O(1)
