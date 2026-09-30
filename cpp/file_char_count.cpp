#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){ 

    ofstream file("index.txt",ios :: app);

    if(!file){
        cout<<"Error opening the file"<<endl;
        return 1;
    }

    string newText;
    cout<<"Enter the new text to append : ";
    getline(cin,newText);

    file<<newText<<endl;
    file.close();

    cout<<"\nText successfully appened!\n";
    cout<<"Character count of newly appended text :"<<newText.length()<<" characters. "<<endl;
    return 0;
}
