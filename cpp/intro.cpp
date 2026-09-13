//using same named function inside namespace : avoiding name conflicts

#include <iostream>
using namespace std;

namespace intro_a {
    void display(){
        cout<<"Hello world"<<'\n';
    }
}

namespace intro_b {
    int display(){

        int sum = 0, num = 1;
        sum = sum+num;
        cout<<"Sum :"<<sum;
        return 0;
    }
    
}

int main(){
    intro_a :: display();
    intro_b :: display();
}
