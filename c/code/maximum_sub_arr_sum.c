#include <stdio.h>
#include <limits.h>

int max(int a, int b){
   return (a>b) ? a : b;
}

int maxOfThree(int a, int b, int c){
    return max(max(a, b), c);
}

int maxCrossSubArr(int arr[], int l, int h, int mid){
    int sum = 0;
    int left_sum = INT_MIN;

    for(int i=mid; i>=l; i--){
        sum += arr[i];
        if(sum > left_sum){
            left_sum = sum;
        }
    }
    
    sum = 0;
    int right_sum = INT_MIN;

    for(int j=mid+1; j<=h; j++){
        sum += arr[j];

        if(sum > right_sum){
            right_sum = sum;
        }
    }
    return left_sum + right_sum;
}

int maxSubArrSum(int arr[], int l, int h){
    if(l == h)
        return arr[l];
    
    int mid = (l + h) / 2;

    return maxOfThree(maxSubArrSum(arr, l, mid), maxSubArrSum(arr, mid+1, h), maxCrossSubArr(arr, l, h, mid));
}

int main(){
    int arr[100],n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);

    printf("Enter the elements : ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    
    int max_sum = maxSubArrSum(arr, 0, n-1);
    printf("Maximum sub array sum = %d",max_sum);
    return 0;
}
