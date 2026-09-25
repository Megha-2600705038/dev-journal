//---To write to a file---:

#include <iostream>
#include <fstream>
using namespace std;

int main(){

     //created outFile stream object and open it.
     ofstream outFile;
     outFile.open("index.txt");

     //error message if the file not open.
     if(!outFile){
       cout<<"Error to open the file ";
     return 1;
    }

    //write data into the file and close it.
    outFile<<"Hello World!";
    outFile.close();

  //message for the file opened without error.
  cout<<"File opened succesfully";

return 0;
}


//---To read from a file----:

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

    ifstream outFile;
    outFile.open("index.txt");

    if(!outFile){
        cout<<"Error";
        return 1;
    }

    string line;

    while(getline(outFile,line)){
        cout<<line;
    }

    outFile.close();
    
    return 0;
    
}
