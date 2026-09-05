#include <stdio.h>

int pairs_fun(int *A, int n){
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            printf("%d %d\n",A[i],A[j]);
        }
    }
}

int main(){
    int size = 3;
    int arr[]= {1,2,3};

    int pairs = pairs_fun(arr , size);
    return 0;
}
