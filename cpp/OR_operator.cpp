//Example for OR operator:

#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int user_id = 123;
    string password = "megha";

    if(password == "megha" || user_id == 123){
        cout<<"Welcome! May i help you?\n";
    }else{
        cout<<"Please try again\n";
    }
    return 0;
}
