//Example for NOT operator:

#include <iostream>

using namespace std;

int main(){
    int user_id = 123;
    string password = "megha";

    if(!(password == "megha" && user_id == 123)){
        cout<<"Wrong Credintials\n";
    }else{
        cout<<"You are logged in\n";
    }
    cout<<"Thank you";
    return 0;
}
