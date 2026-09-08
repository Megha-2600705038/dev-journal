#include <iostream>
using namespace std;

int main(){
    int n, arr[100];
    cout<<"Enter the size (maximum 100) : ";
    cin>>n;

    cout<<"Enter the array elements : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"The doubled array ----\n";
    for(int i=0; i<n; i++){
        arr[i] = 2*arr[i];
        cout<<arr[i]<< " ";
    }
    return 0;
}
