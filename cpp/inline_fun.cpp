// Program to ceating an inline function to find the maximum of two numbers:

#include <iostream>
using namespace std;

inline int numMax(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }

    //return(a>b) ? a : b;
}

int main(){
    int x,y;
    cout<<"Enter the values : ";
    cin>>x>>y;

    int maxNumber = numMax(x,y);
    cout<<"Maximum number = "<<maxNumber<<endl;
    return 0;
}
