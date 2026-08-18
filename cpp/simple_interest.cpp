#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double amount,year,rate;

    cout<<"Enter the principal amount: ";
    cin>>amount;
    cout<<"Enter the time frame: ";
    cin>>year;
    cout<<"Enter the rate: ";
    cin>>rate;

    double simple_interest = (amount * year * rate)/100;
    cout<<"Simple interest: "<<simple_interest<<"\n";

    double compound_interest = amount * pow((1+(rate/100)),year) - amount;
    cout<<"Compound interest: "<<compound_interest;

    return 0;
}
