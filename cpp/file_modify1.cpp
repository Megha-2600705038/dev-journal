#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

struct Student{
    int rollno;
    float marks;
    char name[30];
};

void addStudent(){
    ofstream fout("students.txt",ios::app);
    Student s;

    cout<<"Enter the Roll number : ";
    cin>>s.rollno;
    cin.ignore();
    cout<<"Enter the Name : ";
    cin.getline(s.name,30);
    cout<<"Enter the marks : ";
    cin>>s.marks;

    fout<<setw(5)<<s.rollno<<setw(20)<<s.name<<setw(10)<<s.marks;
    fout.close();
}

void dispalyStudent(){
    ifstream fin("Student.txt");
    if(!fin){
        cout<<"Error";
        return;
    }

    cout<<"Students Records";
    string line;

    while(getline(fin,line)){
        cout<<line<<endl;
    }

    fin.close();
}

void modifyStudent(){
    fstream file("students.txt",ios::in | ios::out);
    if(!file){
        cout<<"\n File not found!\n";
        return;
    }

    int roll;
    cout<<"Enter the Roll Number to modify : ";
    cin>>roll;

    Student s;
    streampos pos;
    bool found = false;

    const int Record_length = 36;

    while (!file.eof()){
        pos = file.tellg();

        file>>s.rollno>>s.name>>s.marks;

        if(!file){
            break;
        }

        if(s.rollno == roll){
            found = true;

            cout<<"Current Details - Name: "<<s.name<<", Marks: "<<s.marks<<endl;
            cout<<"Enter new Name :";
            cin.ignore();
            cin.getline(s.name, 30);

            cout<<"Enter new Marks : ";
            cin>>s.marks;

            file.seekp(pos);

            file<<setw(5)<<s.rollno<<setw(20)<<s.name<<setw(10)<<s.marks;
            cout<<"\nStudents details updated successfully\n";
            break;
        }
    }

    if(!found){
        cout<<"\nStudent not found\n";
        file.close();
    }
    
}

int main(){
    int choice;

    do{
        cout<<"---Student Data Management---";
        cout<<"\n1.Add Student";
        cout<<"\n2.Display Student\n";
        cout<<"\n3.Modify Student\n";
        cout<<"\nExist\n";
        cout<<"Enter your choice : ";
        cin>>choice;

        switch (choice)
        {
        case 1:addStudent();
            break;
        case 2:dispalyStudent();
            break;
        case 3:modifyStudent();
            break;
        case 4:cout<<"\nExiting...\n";
            break;
        default:cout<<"\n Invalid choice! Try again.\n";
            break;
        }
    }while (choice!=4);
    {
        return 0;
    }
    
}
