#include <iostream>
using namespace std;

inline int add(int a, int b){
    return a+b;
}

inline double si(double a, double b, double c){
    return (a*b*c)/100.0;
}

int main(){
    cout<<"Addition of two integers = "<<add(5, 10)<<endl;
    cout<<"Simple Interest = "<<si(4.5, 30.9, 10.3)<<endl;
    return 0;
}
