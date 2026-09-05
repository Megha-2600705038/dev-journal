#include <stdio.h>
#include <stdbool.h>

int duplicate(int *A , int n){

      for(int i=0; i<n; i++){
        bool isDuplicate = false;

        for(int j=i+1 ;j<n; j++){
            if(A[i] == A[j]){
                isDuplicate = true;
                return 1;
            }
        }
    }
    return 0;
}


int main(){
    int size;
    printf("Enter the size of array : ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the array elements : ");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    int check_dupl = duplicate(arr, size);

    if(check_dupl == 1){
        printf("Duplicate elements founded");
    }else{
        printf("Duplicate elements not founded");
    }
    
    return 0;
}
