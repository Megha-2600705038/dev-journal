#include <iostream>
using namespace std;

class Parent {

public :
    int n;
    void print(){
        cout<<"The value of n is "<<n<<endl;
    }
};

class Base : public Parent{

public :
    void fun(){
        n = 20;
    }
};

int main(){
    Base obj;
    obj.fun();
    obj.print();

    return 0;
}
