#include <stdio.h>

int maximum(int *A ,int n){
    int max_num = A[0];

    for (int i = 1; i < n; i++)
    {
        if(max_num < A[i]){
            max_num = A[i];
        }
    }
    return max_num;
}

int main(){
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the array elements : ");

    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);     
    }
    
   int maximum_num = maximum(arr, size);
   printf("Maximum number is : %d\n",maximum_num);
   return 0;
}
