#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter a letter or a digit : ";
    cin>>ch;

    if(ch == '0' && ch =='9'){
        cout<<"You entered a digit\n";
    }else if(ch == 'A' && ch == 'Z'){
        cout<<"You entered a uppercase character\n";
    }else if(ch == 'a' && ch == 'z'){
        cout<<"You entered a lowercase character\n";
    }else{
        cout<<"You are not enterd a digit or character.";
    }
    return 0;
}
