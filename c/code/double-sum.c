#include <stdio.h>

int fun(int *A,int n){
    int sum = 0;

    printf("The doubled array is : ");
    for(int i=0; i<n; i++){
        printf("%d\n",A[i] *= 2);
    }
    
    for (int i = 0; i < n; i++)
    {
        sum += A[i];
    }
    return sum;
}

int main(){
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the array elements : ");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    int sum = fun(arr, size);
    printf("Sum : %d\n",sum);
}
