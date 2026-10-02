#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream file("index.txt");

    string str[100];
    string word = "the";
    int word_count = 0;
    int total_words = 0;


    if(!file){
        cout<<"Error occured to open the file";
        return 1;
    }

    while (file>>str[total_words])
    {
        for(int k=0; k<str[total_words].length(); k++){
            str[total_words][k] = tolower(str[total_words][k]);
        }

        total_words++;
    
        if(total_words>=100){
            break;
        }
    }

    for(int i=0; i<=total_words-1; i++){
        if(str[i] == word){
            word_count++;
        }
    }
    cout<<"Word count is : "<<word_count<<endl;

    return 0;
}
