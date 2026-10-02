#include <iostream>
using namespace std;

int main(){
    int n;
    double x;
    cout<<"Enter the value of X : ";
    cin>>x;
    cout<<"Enter the number of terms n : ";
    cin>>n;

    double sum = 1;
    double term = 1;

    for(int i=1; i<n; i++){
        int d = 2 * i;

        term = -term *(x * x) / (d * (d +1));
        sum += term;
    }
    cout<<"The sum of series = "<<sum<<endl;
    return 0;
}
