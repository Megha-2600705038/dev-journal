#include <iostream>
using namespace std;

int main(){
    int val = 10;
    int *ptr = &val;
    int **ptr1 = &ptr;
    cout<<*ptr<<endl;
    cout<<**ptr1<<endl;

    return 0;
}
