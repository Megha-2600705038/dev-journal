#include <stdio.h>

int main(){
    int n, e, u[20], v[20], w[20], temp;
    int count = 0, cost = 0, parent[20];

    printf("Enter the number of vertices and edges : ");
    scanf("%d%d",&n,&e);
    printf("Enter the source, destination, and weight : ");
    for(int i=0; i<e; i++){
        scanf("%d%d%d",&u[i],&v[i],&w[i]);
    }

    for(int i=0; i<e-1; i++){
        for(int j=i+1; j<e; j++){
            if(w[i]>w[j]){
                temp = w[i];
                w[i] = w[j];
                w[j] = temp;

                temp =u[i];
                u[i] = u[j];
                u[j] = temp;

                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        parent[i] = i;
    }
    printf("MCST Edges : \n");
    for(int i=0; i<e && count < n-1; i++){
        int a = u[i], b = v[i];

        while(parent[a]!=a){
            a = parent[a];
        }
        while (parent[b]!=b){
            b = parent[b];
        }
        if(a!=b){
            printf("%d-%d=%d\n",u[i],v[i],w[i]);
            cost += w[i];
            parent[a] = b;
            count++;
        }
    }
    printf("Minimum Cost = %d",cost);
    return 0;
}
