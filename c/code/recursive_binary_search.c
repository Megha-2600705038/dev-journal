#include<stdio.h>

int RBS(int a[], int l, int h, int key)
{
    if(l>h){
        return -1;
    }

    int mid = (l + h)/2;
    if(a[mid] == key){
        return mid;
    }else if(key > a[mid]){
        return RBS(a, mid+1, h, key);
    }else{
        return RBS(a, l, mid-1, key);
    }
    
}

int main(){
    int a[] = {2,6,3,4,8,9,10,1,5};
    int n = sizeof(a) / sizeof(a[0]);
    int key;

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("Sorted array : ");
    for(int i=0; i<n; i++){
        printf("%d",a[i]);
    }
    printf("\n");
    
    printf("Enter element to search : ");
    scanf("%d",&key);

    int result = RBS(a, 0, n-1, key);

    if(result != -1){
        printf("Element %d found at index %d\n",key,result);
    }else{
        printf("Element %d not found in the array \n",key);
    }
    return 0;
}
