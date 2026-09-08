#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;

    cout<<"The even numbers are ----\n";
    for(int i = 1; i<=num; i++){
        if(i%2 == 0){
            cout<<i<<"\n";
        }
    }
    return 0;
}
