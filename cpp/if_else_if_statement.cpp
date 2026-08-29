//Example for if/else if statement:

#include <iostream>
using namespace std;

int main(){
    float testScore;
    cout<<"Enter your test score : ";
    cin>>testScore;

    if(testScore >= 90){
        cout<<"Your grade is A\n";
    }else if(testScore >= 80){
        cout<<"Your grade is B\n";
    }else if(testScore >= 70){
        cout<<"Your grade is C++\n";
    }else if(testScore >= 60){
        cout<<"Your grade is C\n";
    }else if(testScore >= 50){
        cout<<"Your grade is D\n";
    }else{
        cout<<"Your grade is F";
    }
    return 0;
}
