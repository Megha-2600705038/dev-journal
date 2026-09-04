#include <stdio.h>

int sum_list(int *A, int n){
    int sum = 0;

    for(int i=0; i<n; i++){
        sum += A[i];
    }
    printf("Sum of elements : %d\n",sum);

    for(int j=0; j<n; j++){
        printf("The element at index %d : %d\n",j,A[j]);
    }
}

int main(){
    int size;
    printf("Enter the size : ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the array elements : ");
    for(int i=0 ; i<size ; i++){
        scanf("%d",&arr[i]);
    }

    int result = sum_list(arr, size);

    return 0;
}
