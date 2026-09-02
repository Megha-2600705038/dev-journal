#include <stdio.h>
int product_fun(int *A ,int n){

    int product = 1;
    for(int i = 0; i<n ; i++){
        product *= A[i];
    }
    return product;
}

int main(){
    int size;
    printf("Enter the array size : ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the array elements : ");
    for(int i = 0;i < size;i++){
        scanf("%d",&arr[i]);
    }

    int array_product = product_fun(arr , size);
    printf("The product of the array elements : %d",array_product);
    return 0;
}
