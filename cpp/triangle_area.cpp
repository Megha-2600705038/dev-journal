//Program to find area of a triangle:

#include <iostream>
using namespace std;

int main(){
    int length,width;
    cout<<"Enter the length of the triangle : ";
    cin>>length;
    cout<<"Enter the width of the triangle : ";
    cin>>width;

    float area = length * width;
    cout<<"The area of the triangle is : "<<area;
    return 0;
}
