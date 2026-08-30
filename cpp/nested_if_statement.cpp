//Example for nested if statement:

#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter the values : ";
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
        cout<<"This is the largest number :"<<a;
        }
    }else if(b>c){
        cout<<"This is the largest number : "<<b;
    }else{
        cout<<"This is the largest number : "<<c;
        }
    return 0;
    }
    
