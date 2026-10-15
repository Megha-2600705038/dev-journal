#include <stdio.h>

void maxmin(int arr[], int l, int h, int *max, int *min){
    int mid, max1, max2, min1, min2;

    if(l==h){
        *max = *min = arr[l];
    }else if(l == h-1){
        if(arr[l] > arr[h]){
            *max = arr[l];
            *min = arr[h];
        }else{
        *max = arr[h];
        *min = arr[l];
        }
    }else{
        mid = (l+h)/2;
        maxmin(arr, l, mid, &max1, &min1);
        maxmin(arr, mid+1, h, &max2, &min2);

        *min = (min1<min2) ? min1 : min2;
        *max = (max1>max2) ? max1 : max2;
    }
}

int main(){
    int n, arr[100],max,min;
    printf("Enter the number of elements : ");
    scanf("%d",&n);

    printf("Enter the Elements : ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    maxmin(arr,0,n-1,&max,&min);

    printf("Maximum element=%d\n",max);
    printf("Minimum element=%d\n",min);
    return 0;
}
