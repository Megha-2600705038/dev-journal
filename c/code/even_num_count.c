#include <stdio.h>

int even_count(int *A, int n){
    int count = 0;
    for(int i=0 ; i<n ; i++){
        if(A[i] % 2 == 0){
            count++;
        }
    }
    return count;
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

    int count = even_count(arr , size);
    printf("The count of even number is : %d",count);
    return 0;    
}
