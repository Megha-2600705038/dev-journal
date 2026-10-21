//C++ Program to Inherit a Student class from Person Class printing the properties of the Student.

#include <iostream>
#include <string>
using namespace std;

class Person{
private :
    char fname[50],lname[50],gender[10];
protected :
    int age;
public :
    void setPerson(){
        cout<<"Enter the First Name : ";
        cin.getline(fname,50);
        cout<<"Enter the last Name : ";
        cin.getline(lname,50);
        cout<<"Enter the gender : ";
        cin.getline(gender,10);
        // cin.ignore();
    }
    void displayPerson(){
        cout<<"First Name : "<<fname<<endl;
        cout<<"Last Name : "<<lname<<endl;
        cout<<"Gender : "<<gender<<endl;
    }
};

class Student : public Person {
private:
    char college_name[150], level[30];
public:
    void setStudent(){
        cout<<"Enter the College Name : ";
        // cin>>ws;
        cin.getline(college_name,150);
        cout<<"Enter the Level : ";
        cin.getline(level,30);
    }
    void displayStudent(){
        cout<<"===Studendt Details ===\n";
        displayPerson();

        cout<<"College Name : "<<college_name<<endl;
        cout<<"Level : "<<level<<endl;
    }
};

int main(){
    Student obj;
    obj.setPerson();
    obj.setStudent();
    obj.displayStudent();
    return 0;
}
