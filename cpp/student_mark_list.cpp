#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string name;
    int roll_no;

public:
    void get_details(){
        cout<<"Enter Student name : ";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter Roll number : ";
        cin>>roll_no;
    }
    void display_deatils() const{
        cout<<"\nRoll number :" <<roll_no<<endl;
        cout<<"\nStudent name : "<<name<<endl;
    }
};

class SSLCResult : public Student{
private:
    float marks[5];
    float toatal;

public:
    void sslc_marks(){
        get_details();
        toatal = 0;

        cout<<"Enter marks for 5 subjects(out of 100 each):\n";
        for(int i=0; i<5; ++i){
            cout<<" Subject "<<(i+1)<< " ";
            cin>>marks[i];
            toatal += marks[i];
        }
    }
    void display_result() const{
        cout<<"---\nSSLC EXAM RESULT---";
        display_deatils();
        cout<<"Total Marks : "<<toatal<<" /500 \n";
        cout<<"Percentage : "<<(toatal/500.0) * 100<<" % "<<endl;
        cout<<"----------------------------------------\n";
    }
};

class PlustwoResult : public Student {
private:
    float theory_marks[5];
    float practical_marks[5];
    float total;

public:
    void get_plustwo_marks(){
        get_details();
        total = 0;
        cout<<"Enter marks for 5 subjects : ";
        for(int i=0; i<5; ++i){
            cout<<"\n Subject "<<(i+1)<<":"<<endl;
            cout<<" Theory Mark(out of 80) : ";
            cin>>theory_marks[i];
            cout<<" Practical Mark(out of 20) : ";
            cin>>practical_marks[i];
            total += (theory_marks[i] + practical_marks[i]);
        }
    }
    void display_result() const{
        float total_theory = 0, total_practical = 0;
        for(int i=0; i<5; ++i){
            total_theory += theory_marks[i];
            total_practical += practical_marks[i];
        }

        cout<<"---PLUS TWO EXAM RESULT---";
        display_deatils();
        cout<<"Total Theory : "<<total_theory<<"/400\n";
        cout<<"Total Practical : "<<total_practical<<"/100\n";
        cout<<"Grand Total : "<<total<<"/500\n";
        cout<<"Percentage : "<<(total / 500.0) * 100<<"%"<<endl;
        cout<<"------------------------------------------";
    }
};

int main(){
    int choice;
    cout<<"Select the course : ";
    cout<<"1. SSLC\n";
    cout<<"2. Plus Two\n";
    cout<<"Enter your choice : ";
    cin>>choice;

    if(choice == 1){
        SSLCResult sslc_student;
        sslc_student.sslc_marks();
        sslc_student.display_result();
    }else if(choice == 2){
        PlustwoResult plus_two_student;
        plus_two_student.get_plustwo_marks();
        plus_two_student.display_result();
    }
    else{
        cout<<"Exit : Invalid choice! Exiting program."<<endl;
    }
    return 0;
}
