#include <iostream>
using namespace std;

class Vehicle {
public:
    Vehicle(){
        cout<<"This is a vehicle.\n";
    }
};

class Fourwheeler:public Vehicle{
public:
    Fourwheeler(){
        cout<<"Four wheeler vehicle.\n";
    }
};

class Car:public Fourwheeler{
public:
    Car(){
        cout<<"It is a four wheeler vehicle.";
    }
};

int main(){
    Car obj;
    return 0;
}
