#include <iostream>
using namespace std;

int main(){
    int sum = 0,n;
    cout<<"Enter the number: ";
    cin>>n;

    for(int i=1;i<=n;i=i+2){
        sum += i;
    }
    cout<<"Sum of odd numbers : "<<sum;
    return 0;
}


