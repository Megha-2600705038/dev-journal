#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;

    for(int i=4; i<=num; i++){
        if(i%3 == 0){
            cout<<i;
            break;
        }
    }
    return 0;
}
