#include <iostream>
using namespace std;

inline double cal(double x){
    return (x*x) - ((x*x*x*x) / 6.0);
}

int main(){
    double val;
    cout<<"Enter the value : ";
    cin>>val;
    cout<<"The answer = "<<cal(val)<<endl;
    return 0;
}
