#include <iostream>
#include <fstream>
// #include <string>
using namespace std;

int main(){
    ifstream infile("example.txt");

    if(!infile.is_open()){
        cerr<<"Error : Could not open the file\n";
    }

    string lines;
    cout<<"---File content displayed sucessfully---";

    while (getline(infile,lines))
    {
        cout<<lines;
    }
    
    infile.close();
    return 0;
}
