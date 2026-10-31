#include <iostream>
using namespace std;

class Complex{
private:
    double real;
    double imag;

public:
    Complex(double r = 0.0, double i = 0.0):real(r), imag(i){}

    friend istream& operator>>(istream& input, Complex &c){
        input >> c.real>>c.imag;
        return input;
    }
    friend ostream& operator<<(ostream& output, const Complex& c){
        output << c.real << " + "<<c.imag<<"i";
        return output;
    }
};

int main(){
    Complex c1;

    cout<<"Enter real and imaginary parts : ";
    cin>>c1;

    cout<<"The complex number is : "<<c1<<endl;
    return 0;
}
