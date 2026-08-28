// Example for if statement:

#include <iostream>
using namespace std;

int main(){
    int highScore = 95, score1, score2, score3;

    cout<<"Enter the 3 scores: ";
    cin>>score1>>score2>>score3;

    double avg = (score1 + score2 + score3)/3;
    cout<<"Your total marks is : "<<avg<<'\n';

    if(avg >= highScore)
        cout<<"Your total mark is greater than the high score";
    
}
