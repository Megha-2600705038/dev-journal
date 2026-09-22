#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Student{
    int rollno;
    float marks;
    string name;
};

void addStudent(){

    ofstream fout;
    fout.open("students.txt",ios::app);

    Student s;

    cout<<"Enter the Roll number :";
    cin>>s.rollno;
    cin.ignore();
    cout<<"Enter the Name :";
    getline(cin,s.name);
    cout<<"Enter the marks :";
    cin>>s.marks;

    fout<<s.rollno<<" "<<s.name<<" "<<s.marks;
    fout.close();
    cout<<"Data added sucessfully!";
}

void displayStudent(){
    ifstream fin;
    fin.open("students.txt");
    Student s;

    if(!fin){
        cout<<"Error happened";
        return;
    }

    cout<<"Student Records";
    cout<<"RollNUmber/tName/tMarks";
    cout<<"-------------------------------";
    while (fin>>s.rollno>>s.name>>s.marks)
    {
        cout<<s.rollno<<"/t"<<s.name<<"/t"<<s.name<<endl;
    }
    fin.close();
    
}
void modifyStudent(){
    int targetRollno;
    cout<<"Enter the target rollnumber : ";
    cin>>targetRollno;

    ifstream fin("students.txt");
    if(!fin){
        cout<<"Error to open";
        return;
    }

    ofstream fout("temp.txt");
    Student s;
    bool found = false;

    while (fin>>s.rollno>>s.name>>s.marks){

        if(s.rollno == targetRollno){
            found = true;
            cout<<"Students Details- "<<s.name<<s.marks;
            cout<<"Enter the new name : ";
            cin.ignore();
            getline(cin,s.name);
            cout<<"Enter new marks : ";
            cin>>s.marks;
        }

        fout<<s.rollno<<" "<<s.name<<" "<<s.marks;
    }
    fin.close();
    fout.close();

    if(!found){
        cout<<"The student data not found";
        remove("temp.txt");
    }else{
        remove("students.txt");
        rename("temp.txt","student.txt");
        cout<<"Student deta updated sucessfully";
    }
}

int main(){
    int choice;

    do
    {
        cout<<"Students Data Management";
        cout<<"1.AddStudent/n2.DisplayStudent/n3.ModifyStudent/n4.Exist/n";
        cout<<"/nEnter your choice";
        cin>>choice;

        switch (choice)
        {
        case 1: addStudent();
            break;
        case 2: displayStudent();
            break;
        case 3: modifyStudent();
            break;
        case 4: cout<<"Exisiting program";
            break;
        default: cout<<"Invalid choice. Try again!";
            break;
        }

    } while (choice=!4);
    return 0;
}
