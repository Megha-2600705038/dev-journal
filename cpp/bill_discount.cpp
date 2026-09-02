//Program for a store checkout system that applies discount on how much a customer spends:

#include <iostream>
using namespace std;

int main(){
    double total_Amt;
    cout<<"Enter the total amount : ";
    cin>>total_Amt;

    double discount_Amt = 1500;
    double discount_Bill = (total_Amt * 10) / 100;

    if(total_Amt >= discount_Amt){
        total_Amt = total_Amt - discount_Bill ;
        cout<<"You have 10 percentage discount\n";
    }else{
        cout<<"You do not have any discount\n";
    }
    cout<<"Please pay your bill : "<<total_Amt<<"\n";
    cout<<"Thank you for shoping!";

    return 0;
}
