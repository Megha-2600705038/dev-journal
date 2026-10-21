//C++ program to create and display properties of a typist from a staff using Single Inheritance.

#include <iostream>
#include <string>
using namespace std;

class Staff{
private:
    int code;
    char name[50];

public:
    void setDetails(){
       cout<<"Enter the name : ";
       cin.getline(name,50);
       cout<<"Enter the code : ";
       cin>>code;
    }
    void dispalyDetails(){
        cout<<"Staff Name : "<<name<<endl;
        cout<<"Code : "<<code<<endl;
    }  
};

class Typist : public Staff{
private :
    int speed;

public:
    void setSpeed(){
        cout<<"Enter the typing speed : ";
        cin>>speed;
    }
    void dispalyInfo(){
        cout<<"---The typist details given---\n";
        dispalyDetails();
        cout<<"Speed : "<<speed<<endl;
    }
};


int main(){
    Typist obj;

    obj.setDetails();
    obj.setSpeed();
    obj.dispalyInfo();
}
