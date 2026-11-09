#include <iostream>
using namespace std;

class Box{
private:
    static int l;
    static int b;
    static int h;

public:
    static void print(){
        cout<<"The value of Length = "<<l<<endl;
        cout<<"The value of Breadth = "<<b<<endl;
        cout<<"The value of Height = "<<h<<endl;
    }
};

int Box :: l = 10;
int Box :: b = 20;
int Box :: h = 30;

int main(){
    Box::print();
    return 0;
}
