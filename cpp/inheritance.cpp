#include <iostream>
using namespace std;

class Animal{
    public :
        void sound(){
            cout<<"Animal makes sound\n";
        }
};

class Dog : public Animal{
    public :
        void sound(){
            cout<<"Dog barks\n";
        }
};

class Cat : public Animal{
    public : 
        void sound(){
            cout<<"Cat meow\n";
        }
};

class Crow : public Animal{
    public:
        void sound(){
            cout<<"Crow crow";
        }
};

int main(){
    Animal a;
    a.sound();
    Dog d;
    d.sound();
    Cat c;
    c.sound();
    Crow cr;
    cr.sound();
    return 0;
}
