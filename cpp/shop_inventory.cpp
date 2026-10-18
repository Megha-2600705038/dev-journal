#include <iostream>
#include <string>
using namespace std;

class ShopInventory{
protected:
    string employeeName; 
    string itemNames[3] = {"Item A", "Item B", "Item C"};
    int itemStocks[3];

public:
    void getBaseDetails(){
        cout<<"Enter Employee Name : ";
        getline(cin>>ws, employeeName);

        cout<<"---Intial Stock Setup---\n";
        for(int i=0; i<3; i++){
            cout<<"Enter available quantity for " <<itemNames[i]<<" : ";
            cin>>itemStocks[i];
        }
    }

    void displayDetails() const {
        cout<<"===INVENTORY STATUS===\n";
        cout<<"Current Stock Levels : \n";
        for(int i=0; i<3; i++){
            cout<<" - "<<itemNames[i]<<" : "<<itemStocks[i]<<" available\n";
        }
    }
};

class EMployeeSalary : public ShopInventory{
private:
    int daysWorked;
    const double Daily_wage = 500.0;
    double totalSalary;

public:
    void calculateSalary(){
        getBaseDetails();

        cout<<"Enter the number of days worked : ";
        cin>>daysWorked;
        totalSalary = daysWorked * Daily_wage;

        displayDetails();
        cout<<"Days Worked : "<<daysWorked<<" days\n";
        cout<<"Total Salary : $"<<totalSalary<<"\n";
    }
};

class CustomerOrder : public ShopInventory {
private:
    double itemPrice[3] = {15.0, 25.0, 50.0};
    int orderQuantities[3];
    double totalBill = 0.0;

public:
    void processCustomerOrder(){
        getBaseDetails();

        cout<<"\n---Processing Order Input---";
        for(int i=0; i<3; i++){
            cout<<"Enter order quantity for "<<itemNames[i]<<" ($" <<itemPrice[i] <<"/units): ";
            cin>>orderQuantities[i];

            if(orderQuantities[i]>itemStocks[i]){
                cout<<"Insufficient stock! Only "<<itemStocks[i]<<" units added.\n";
                orderQuantities[i] = itemStocks[i];
            }
            itemStocks[i] -= orderQuantities[i];
            totalBill += orderQuantities[i] * itemPrice[i];
        }
        cout<<"\n===CUSTOMER BILL===\n";
        cout<<"Order handled by : "<<employeeName<<"\n";
        cout<<"Total bill to pay : $"<<totalBill<<"\n";

        displayDetails();
    }
};


int main(){
    int choice;
    cout<<"Select Operation Mode : \n";
    cout<<"1. Calculate Employee Salary\n";
    cout<<"2. Process Customer Order & Update Stock\n";
    cout<<"Enter choice(1-2) : ";
    cin>>choice;

    if(choice==1){
        EMployeeSalary empObj;
        empObj.calculateSalary();
    }
    else if(choice==2){
        CustomerOrder orderObj;
        orderObj.processCustomerOrder();
    }
    else{
        cout<<"Invalid choice selection.\n";
    }
    return 0;
}s
