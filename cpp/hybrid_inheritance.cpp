#include <iostream>
using namespace std;

class Vehicle{
public:
    Vehicle(){
        cout<<"This is a vehicle.\n";
    }
};

class Fare{
public:
    Fare(){
        cout<<"Fare of vehicle.\n";
    }
};

class Car:public Vehicle{
public:
    Car(){
        cout<<"This vehicle is car.\n";
    }
};

class Bus:public Vehicle, public Fare{
public:
    Bus(){
        cout<<"This vehicle is a bus with fare.";
    }
};

int main(){
    Bus obj;
    Car obje;
    return 0;
}
