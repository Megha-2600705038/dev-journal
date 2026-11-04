
#include <iostream>
#include <string>
using namespace std;

class SalaryCalculator{
public:
    void compute_salary(string name, double hours_worked, double hourly_rate){
        double salary = hours_worked * hourly_rate;

        cout<<"Daily Wage Employee : "<<name<<"\n";
        cout<<"Hours Worked :    "<<hours_worked<<"hrs\n";
        cout<<"Hourly Rate :     $"<<hourly_rate<<"/hr\n";
        cout<<"Total Salary :   $"<<salary<<"\n";
    }

    void compute_salary(string name, double fixed_monthly_pay, int deductions){
        double salary = fixed_monthly_pay - deductions;

        cout<<"Contract Employee :    "<<name<<"\n";
        cout<<"Fixed Base Pay :        $"<<fixed_monthly_pay<<"\n";
        cout<<"Total Deduction :       $"<<deductions<<"\n";
        cout<<"Net Salary :        $"<<salary<<"\n";
    }

    void compute_salary(string name, double basic_salary, double allowance, bool is_regular){
        double salary = basic_salary + allowance;

        cout<<"Regular Employee :    "<<name<<"\n";
        cout<<"Basic Salary :     $"<<basic_salary<<"\n";
        cout<<"Allowance :     $"<<allowance<<"\n";
        cout<<"Gross Salary :   $"<<salary<<"\n";
    }
};

int main(){
    SalaryCalculator cal;

    cal.compute_salary("Arya",45.0,15.20);
    cal.compute_salary("Anjali",3500.0,200.0);
    cal.compute_salary("Anu",5000.0,123.0,true);
  return 0;
}
