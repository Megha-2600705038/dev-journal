#include <iostream>
using namespace std;

int main(){
    double r, pi =3.14;
    cout<<"Enter the radius : ";
    cin>>r;

    double area = r * r * pi;
    double peimeter = 2 * pi * r;

    cout<<"Area of the circle : "<<area<<'\n';
    cout<<"Perimeter of the circle : "<<peimeter;
    return 0;
}
