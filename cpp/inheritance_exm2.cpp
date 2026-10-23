#include <iostream>
using namespace std;

class Account {
    public:
        int balance = 100;
};

int main(){
    Account ac;
    // for(int i=1; i<=4; i++){
    //     ac.balance += 50;
    // }
    int i = 1;
    while (i<= 4)
    {
        ac.balance += 50;
        i++;
    }
    
    cout<<"Account balance "<<ac.balance<<endl;
    return 0;
};
