#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int b = 10;
    int *ptr = &a;
    cout<<"Value of pointer = "<<*ptr<<endl;

    ptr = &b;
    cout<<"Value of pointer = "<<*ptr<<endl;
    return 0;
}
