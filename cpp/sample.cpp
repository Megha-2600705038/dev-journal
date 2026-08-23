#include <iostream>
using namespace std;

int main(){
    cout<<"Name : Megha K S"<<'\n';
    cout<<"Department : Computer Science"<<'\n';
    cout<<"College : Central University of Kerela";
    return 0;
}


int main() {
    cout << "Fixing syntax bugs!"<<'\n';
    return 0;
}

namespace UK_Format {
    void printColor(){
        cout<<"COLOR"<<'\n';
    }
}

namespace US_Format {
    void printColor(){
        cout<<"COLOR";
    }
}

int main(){
    UK_Format :: printColor();
    US_Format :: printColor();
}


int calculateTax(){
    int n = 50;
    return n;
}
int main(){
    int num = calculateTax();
    cout<<num;
}

int sum(){
    int a = 49,b = 50;
    int sum = b+a;  
    return sum;
}

int main(){
    int addition = sum();
    cout<<"Sum of 2 numbers:"<<addition;
}
