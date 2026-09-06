#include <iostream>
#include <fstream>
std :: ofstream myfile;

int main(){
    myfile.open("example.txt");
    myfile<<"This is my file!";
    myfile.close();

    return 0;
}
