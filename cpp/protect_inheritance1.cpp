#include <iostream>
#include <string>
using namespace std;

class Device {
    protected:
        string brand;
};

class Smartphone : public Device {
    private:
        int ram;
    public:
    void setRam (int r){
        ram = r;
    }
    int getRam (){
        return ram;
    }

    void setBrand(string b){
        brand = b;
    }

    void displayInfo(){
        cout<<"The brand name "<<brand<<endl;
        cout<<"The ram is "<<getRam()<<endl;
    }
};

int main(){
    Smartphone s;

    s.setBrand("Lenavo");
    s.setRam(64);
    s.displayInfo();
    
    return 0;
}
