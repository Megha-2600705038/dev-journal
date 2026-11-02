#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a;

    cout<<"Value of a = "<<a<<endl;
    cout<<"Address of a = "<<&a<<endl;
    cout<<"Value stored in pointer = "<<ptr<<endl;
    cout<<"Value pointed by the pointer ptr = "<<*ptr<<endl;
    return 0;
}
