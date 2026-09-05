#include <stdio.h>

void arr_mult(int *A , int n, int num){
    printf("Multiplication with array element is given below----\n");

    for(int i=0; i<n; i++){
        int result = A[i] * num;
        printf("%d\n",result);
    }
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

    int num;
    printf("Enter the number to multiply with array elements : ");
    scanf("%d",&num);

    arr_mult(arr, size, num);
}
