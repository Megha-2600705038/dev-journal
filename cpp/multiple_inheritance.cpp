#include <iostream>
using namespace std;

class Birds{
public:
    void display(){
        cout<<"Birds are of two types."<<endl;
    }
};

class Oviparous{
public:
    void display(){
        cout<<"Oviparous animals lay eggs."<<endl;
    }
};

class Sparrow : public Birds, public Oviparous{
public:
    void display(){
        Birds::display();
        Oviparous::display();
        cout<<"Sparrows are small birds."<<endl;
    }
};

int main(){
    Sparrow sw;
    sw.display();
    return 0;
}
