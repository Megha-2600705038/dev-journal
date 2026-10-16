#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    string designation;

public:
    Employee(string emName, string emDesignation){
    name = emName;
    designation = emDesignation;
    }

    void displayDetails() const{
        cout<<"Employee Name : "<<name<<"\n";
        cout<<"Designation : "<<designation<<"\n";
    }
};

class RegularEmployee : public Employee {
private:
    double basicPay;
    double dearnessAllowance;
    double houseRentAllowance;

public:
    RegularEmployee(string emName, string emDesignation, double bp, double da, double hra) 
    : Employee(emName, emDesignation){
        basicPay = bp;
        dearnessAllowance = da;
        houseRentAllowance = hra;
    }

    double calculateSalary() const {
        return basicPay + dearnessAllowance + houseRentAllowance;
    }

};

class ContractEmployee : public Employee {
private :
    double consolidatedSalary;

public :
    ContractEmployee(string emName, string emDesignation, double fixedSalary) 
    : Employee(emName, emDesignation) {
        consolidatedSalary = fixedSalary;
    }

    double calculateSalary() const {
        return consolidatedSalary;
    }
};

int main(){
    string name, designation;
    double bp, da, hra, fixedSalary;

    cout <<"----Regular Employee Details ----\n";
    cout<<"Enter Name : ";
    getline(cin, name);
    cout<<"Enter Designation : ";
    getline(cin, designation);
    cout<<"Enter Basic Pay : ";
    cin>>bp;
    cout<<"Enter Dearness Allowance(DA) : ";
    cin>>da;
    cout<<"Enter House Rent Allowance(HRA) : ";
    cin>>hra;
    cin.ignore();

    RegularEmployee regEmp(name, designation, bp, da, hra);

    cout<<"----Contract Employee Details ----\n";
    cout<<"Enter Name : ";
    getline(cin, name);
    cout<<"Enter Designation : ";
    getline(cin, designation);
    cout<<"Enter Consolidated Fixed Salary : ";
    cin>>fixedSalary;

    ContractEmployee conEmp(name, designation, fixedSalary);

    cout<<"====Employee Salary Reports====\n\n";
    cout<<"---Regular Employee Details---\n";
    regEmp.displayDetails();
    cout<<"Monthly Salary : $ "<<regEmp.calculateSalary()<<"\n";

    cout<<"----Contract Employee Details---\n";
    conEmp.displayDetails();
    cout<<"Monthly Salary : $ "<<conEmp.calculateSalary()<<"\n";

    return 0;
}
