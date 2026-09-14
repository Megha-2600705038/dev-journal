#include <iostream>
#include<cctype>
using namespace std;

int main(){
    string str;
    int vowels_count = 0, space_count = 0;

    cout<<"Enter the string : ";
    getline(cin,str);

    int char_size = str.length();

    for(int i=0; i<char_size; i++){
        char character = tolower(str[i]);

        if(character =='a' || character =='e' || character =='i' || character =='o' || character =='u'){
            vowels_count++;
        }

        if(character ==' '){
            space_count++;
        }
    }
    cout<<"Total number of character : "<<char_size<<'\n';
    cout<<"Total number of vowels : "<<vowels_count<<'\n';
    cout<<"Total number of space : "<<space_count;

    return 0;
}
