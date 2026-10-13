#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void display(){
    ifstream fout("passengers.txt");
    string name, train;
    int ticket;
    cout<<"\nStudent names without initials : \n";
    while (fout>>name>>train>>ticket)
    {
        cout<<name.substr(name.find('.') + 1);
    }
    fout.close();
}

void cancel(){
    ifstream fout("passengers.txt");
    ofstream fin("temp.txt");
    string name, train;
    int ticket, cancelTicket;
    cout<<"Enter cancelled ticket number : ";
    cin>>cancelTicket;
    while (fout>>name>>train>>ticket)
    {
        if(ticket != cancelTicket)
            fin<<name<<" "<<train<<" "<<ticket<<" ";
    }
    fout.close();
    fin.close();
    remove("passengers.txt");
    rename("temp.txt","passengers.txt");
}

int main(){
    ofstream fout("passengers.txt");
    int n, ticket;
    string name, train;
    cout<<"Enter the number of students : ";
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"Name : ";
        cin>>name;
        cout<<"Train : ";
        cin>>train;
        cout<<"Ticket Number : ";
        cin>>ticket;
        fout<<name<<" "<<train<<" "<<ticket<<" ";
    }
    fout.close();
    fout.open("passengers.txt",ios::app);
    cout<<"Enter new student details : \n";
    cin>>name>>train>>ticket;
    fout<<name<<" "<<train<<" "<<ticket<<" ";
    fout.close();
    cancel();
    display();
    return 0;
}
