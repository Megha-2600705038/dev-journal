#include <iostream>
using namespace std;

class Vehicle{
public:
    Vehicle(){
        cout<<"This is a vehicle.\n";
    }
};

class Car : public Vehicle{
public:
    Car(){
        cout<<"This vehicle is car.\n";
    }
};

class Bus : public Vehicle{
public:
    Bus(){
        cout<<"This vehicle is bus.";
    }
};

int main(){
    Car obj2;
    Bus obj1;
    return 0;
}
