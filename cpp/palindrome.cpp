#include <iostream>
#include <iostream>
using namespace std;

int main(){
    string str;
    cout<<"Enter a string : ";
    cin>>str;

    bool isPalindrome = true;
    int length = str.length();

    for(int i=0; i<length/2; i++){
        if(str[i] != str[length- 1-i]){
            isPalindrome = false;
            break;
        }
    }

    if(isPalindrome){
        cout<<"The string is palindrome";
    }else{
        cout<<"The string is not a palindrome";
    }
    return 0;
}
