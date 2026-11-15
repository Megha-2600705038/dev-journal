#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Student {
    protected:
    string name;
    int rollNo;

    public:
    void accessDetails(){
        cout<<"Enter Name : ";
        getline(cin, name);
        cout<<"Enter Roll Number : ";
        cin>>rollNo;
    }
    void calculate(int m1, int m2, int m3){
        // accessDetails();
        double total = m1 + m2 + m3;
        double percentage = (total/300) * 100.0;
        display(total,percentage);
    }

    char gradeSystem(double percentage){
        if(percentage>=90) return 'A';
        else if(percentage>=80) return 'B';
        else if(percentage>=65) return 'c';
        else if(percentage>=50) return 'D';
        else return 'E';
    }

    void display(double total,double percentage){
        cout<<"===The SSLC Result ==="<<endl;
        cout<<"Name : "<<name;
        cout<<"ROll Number : "<<rollNo;
        cout<<"Total Mark : "<<total;
        cout<<"Percentage : "<<percentage;
        cout<<"Grade : "<<gradeSystem(percentage);
    }
};

class PlusTwo : public Student{
public:
    // using Student :: accessDetails;
    // using Student :: gradeSystem;
    using Student ::calculate;
    void calculate(int m1, int p1, int m2, int p2, int m3, int p3){
        double total = (m1+p1)+(m2+p2)+(m3+p3);
        double percentage = (total/600)*100;
        dispaly(total,percentage);
    }
     
    void dispaly(double total, double percentage){
        cout<<"===Plus Two Resul===";
        cout<<"Name : "<<name<<endl;
        cout<<"Roll Number : "<<rollNo<<endl;
        cout<<"Total Mark : "<<total<<endl;
        cout<<"Percentage : "<<percentage<<endl;
        cout<<"Grade : "<<gradeSystem(percentage)<<endl;
    }
};

int main(){
    PlusTwo obj;
    obj.accessDetails();

    int choice;
    cout<<"Enter your choice : \n1.SSLC\n2.PLUSTWO\n3.Exit\n";
    cin>>choice;
    if(choice==1){
        int m1,m2,m3;
        cout<<"Enter marks for 3 papers(out of 100) : ";
        cin>>m1>>m2>>m3;
        obj.calculate(m1,m2,m3);
    }else if(choice ==2){
        int m1,p1,m2,p2,m3,p3;
        cout<<"Enter marks for 3 thoery and practical papers : ";
        cin>>m1>>p1>>m2>>p2>>m3>>p3;
        obj.calculate(m1,p1,m2,p2,m3,p3);
    }else
    {
       cout<<"Wrong Entry!";
    }
    return 0;
}
