#include <iostream>
#include <string>
using namespace std;

class Animal {

private:
    string color;
protected:
    string type;
public:
    void eat(){
        cout<<"I can eat everything .\n";
    }

void setColor(string c){
    color = c;
}
string getColor(){
    return color;
}

};

class Dog : public Animal {

public:
    void setType(string t){
        type = t;
    }

    void sleep(){
        cout<<"I can sleep any where .\n";
    }

    void bark(){
        cout<<"I can bark at anyone .\n";
    }

    void display(){
        cout<<"My type is "<<type<<endl;
        cout<<"My color is "<<getColor()<<endl;
    }
    
};

int main(){
    Dog d;
    d.eat();
    
    d.setColor("Black");
    d.setType("Mammals");

    d.sleep();
    d.bark();
    
    cout<<"---Displaying Details---\n";
    d.display();

}
