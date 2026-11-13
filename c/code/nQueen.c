#include <stdio.h>
#include <stdlib.h>

int x[20],n;
int place(int k, int i){
    int j;
    for(j=1; j<k; j++){
        if(x[j]==i || abs(x[j]-i) == abs(j-k))
        return 0;
    }
    return 1;
}

void nQueen(int k){
    int j,i;
    for(int i=1; i<=n; i++){
        if(place(k,i)){
            x[k] = i;
    
        if(k==n){
            for(j=1; j<=n; j++){
                printf("%d",x[j]);
            }
            printf("\n");
        }else{
            nQueen(k+1);
        }
    }
    }
}
int main(){
    printf("Enter the number of queens : ");
    scanf("%d",&n);

    if(n==1 || n>=20){
        printf("invalid input");
        return 1;
    }
    nQueen(1);
    return 0;
}
