#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

struct Students{
    char name[30];
    string place;
    int number;
};

void addStudent(){
    cin.ignore();
    ofstream outfile("students.txt",ios::app);
    Students s;

    cout<<"Enter the name of student : ";
    cin.getline(s.name,30);

    cout<<"Enter the place : ";
    getline(cin,s.place);

    cout<<"Enter the number : ";
    cin>>s.number;

    outfile<< setw(20) << s.name
            << setw(15) <<s.number 
            << setw(15) <<s.place<<endl;
    outfile.close();

    cout<<"Details added successfully!";
}

void dispalyStudent(){
    ifstream infile("students.txt");
    if(!infile){
        cerr<<"Error : The file could not be opened";
    }

    cout<<"---Students Details---";
    string line;

    while (getline(infile,line))
    {
        cout<<line<<endl;
    }
    infile.close();
    
}

int main(){
    int choice;
    do
    {
        cout<<"\n----STUDENTS DETAILS";
        cout<<"1.Add Students";
        cout<<"2.Dispaly Students";
        cout<<"3.Exist";

        cout<<"Enter your choice : ";
        cin>>choice;

        switch (choice)
        {
        case 1 : addStudent(); break;
        case 2 : dispalyStudent(); break;
        case 3 : cout<<"\nExit\n"; break;
        default: cout<<"You entered wrong choice";
            break;
        }
    } while (choice!=3);
  return 0;   
}
