#include <iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the positive number : ";
    cin>>number;

    for(int i=number ; number>=1 ; i--){
        cout<<i<<" ";
    }
    return 0;
}
