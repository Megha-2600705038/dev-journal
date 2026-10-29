#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand (time(0));
    const int MAX_SIZE = 100;
    double numbers[MAX_SIZE];
    int count = 0;

    try
    {
        ifstream file("numbers.txt");
        if(!file){
            throw "Error : Could not open file."; 
        }

        double val;
        while (file>>val)
        {
            if(count>=MAX_SIZE){
                break;
            }
            numbers[count] = val;
            count++;
        }
        file.close();
        
        if(count == 0){
            throw "Error : No numbers found in file.";
        }

        double num1 = numbers[rand()%count];
        double num2 = numbers[rand()%count];

        cout<<"Numerator : "<<num1<<endl;
        cout<<"Denominator : "<<num2<<endl;

        if(num2 == 0){
            throw "Error : Division by zero is not allowed.";
        }

        double result = num1 / num2;
        cout<<"Result : "<<result<<endl;
    }
    catch(const char*errorMessage)
    {
        cout<< errorMessage<<endl;
    }
    return 0;
}
