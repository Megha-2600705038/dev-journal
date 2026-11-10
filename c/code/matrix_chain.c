#include <stdio.h>
#include <limits.h>

int main(){
    int n,i,j,k,l, min, q, p[100], m[100][100];

    printf("Enter the number of matrices : ");
    scanf("%d",&n);
    printf("Enter the dimension : ");
    for(int i=0; i<=n; i++){
        scanf("%d",&p[i]);
    }

    for(int i=1; i<=n; i++){
        m[i][i] = 0;
    }

    for(int l=2; l<=n; l++){
        for(int i=1; i<=n-l+1; i++){
            j = i+l-1;
            m[i][j] = INT_MAX;

            for(int k=i; k<j; k++){
                q = m[i][k] + m[k+1][j] + p[i-1] * p[k] *p[j];
                if(q<m[i][j])
                    m[i][j] = q;
            }
        }
    }
    printf("Minimum number of multiplication = %d\n",m[1][n]);
    return 0;
}
