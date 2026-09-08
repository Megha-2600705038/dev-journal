#include <iostream>
using namespace std;

int main(){
    int arr[100];
    int size;
    cout<<"Enter the array size (maximum 100) : ";
    cin>>size;
    cout<<"Enter the array elements : ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    int sum = 0;
    for(int i=0; i<size; i++){
        sum += arr[i];
    }
    cout<<"The sum : "<<sum;
    return 0;
}
