//Program to read an entire text file and display teh reversed contents:

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream file;
    file.open("index.txt");

    string line[100];
    int lineCount = 0;

    if(!file){
        cout<<"The file cound not be opened ";
        return 1;
    }

    while (getline(file,line[lineCount]))
    {
        lineCount++;
    }
    
    cout<<"---Reversed Contents---\n";
    for(int i=lineCount-1; i>=0; i--){
        cout<<line[i]<<endl;
    }
    return 0;
}
