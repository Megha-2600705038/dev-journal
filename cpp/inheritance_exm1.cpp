#include <iostream>
using namespace std;

class Car {
    public:
        int mileage = 0;
};

int main(){
    Car myCar;

    for(int i=1; i<=3; i++){
        myCar.mileage += 10;
    }
    cout<<"Car mileage "<<myCar.mileage<<endl;
    return 0;
}
