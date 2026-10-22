// function overloading in single inheritance:

#include <iostream>
using namespace std;

class Animal {
public:
    Animal(){
        cout<<"This is an animal."<<endl;
    }
    void sound(){
        cout<<"Animal s can make sounds."<<endl;
    }
};

class Dog : public Animal{
public:
    Dog(){
        cout<<"This is a Dog"<<endl;
    }
    void sound(){
        cout<<"Dogs barks"<<endl;
    }
};

int main(){
    Dog obj;
    obj.sound();
    obj.Animal::sound();
    return 0;
}
