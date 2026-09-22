#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream infile("index.txt");
    ofstream outfile("exa.txt");

    char ch;

    if(!infile){
        cout<<"Error happened";
        return 1;
    }

    while(infile.get(ch)){
        ch = toupper(ch);

        outfile.put(ch);
    }

    infile.close();
    outfile.close();

    cout<<"File opened successfully and done the case conversion.";
    return 0;
}
