#include <iostream>
using namespace std;

class Vehicle{
public:
    Vehicle(){
        cout<<"This is a vehicle"<<endl;
    }

    void info(){
        cout<<"It is a Tata motors vehicle."<<endl;
    }
};

class Car : public Vehicle{
public:
    Car(){
        cout<<"This is a Car."<<endl;
    }
    void color(){
        cout<<"Car s color is black."<<endl;
    }
};

int main(){
    Car obj;
    obj.info();
    obj.color();
    return 0;
}
