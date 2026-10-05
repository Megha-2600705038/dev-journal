#include <stdio.h>
long long power(int x, int n){
    
    long long result = 1;
    long long base = x;

    while (n>0)
    {
        if(n%2 == 1){
            result *= base;
        }
        base = base * base;
        n = n/2;
    }
    return result;
}

int main(){
    int x,n;
    printf("Enter x : ");
    scanf("%d",&x);
    printf("Enter n : ");
    scanf("%d",&n);

    int sol = power(x,n);
    printf("%d",sol);
    // printf("%d^%d=%lld\n",x,n,power(x,n));
    return 0;
}
