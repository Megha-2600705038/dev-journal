//Example for AND operator:

#include <iostream>
using namespace std;

int main(){
    int password;
    int user_id;
    
    cout<<"Enter the password : ";
    cin>>password;
    cout<<"Enter the user_id : ";
    cin>>user_id;

    if(password == 123 && user_id == 777){
        cout<<"Logged\n";
    }else{
        cout<<"Please try again!\n";
    }
    cout<<"Thank you";
    return 0;
}
