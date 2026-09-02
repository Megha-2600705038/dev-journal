//Program to convert a temperature from celsius to fahrenheit:

#include <iostream>
using namespace std;

int main(){
    double temp;

    cout<<"Enter the temperature in celsius : ";
    cin>>temp;

    double fahrenheit = (temp * 9.0/5.0) + 32;
    cout<<"Temperature in Fahrenheit is : "<<fahrenheit;
    
    return 0;
}
