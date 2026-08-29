#include <iostream>
using namespace std;

int main(){
    int highScore = 95,score1,score2,score3;
    cout<<"Enter your test scores : ";
    cin>>score1>>score2>>score3;

    float avg = (score1 + score2 + score3 )/3;
    cout<<"Your marks average is : "<<avg<<"\n";

    if(avg >= highScore){
        cout<<"Congratulations!\n";
        cout<<"Your average mark is greater than the highscore.\n";
        cout<<"You nailed it";
    }
    return 0;
}
