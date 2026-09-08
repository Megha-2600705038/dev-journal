#include <iostream>
using namespace std;

int main(){
    int arr[100], n;
    cout<<"Enter the size (maximum 100) : ";
    cin>>n;

    cout<<"Enter the array elements : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int max = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout<<"Maximum number is : "<<max;
    return 0;
}
