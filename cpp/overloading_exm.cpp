#include <iostream>
using namespace std;

struct Number{
    int value;
};

bool operator>(Number n, int limit){
    return n.value>limit;
}

int main(){
    int lowList[10], highList[10];
    int lowCount = 0, highCount = 0;

    cout<<"All Numbers : ";
    for(int i=0; i<10; i++){
        int randVal = rand()%1000;
        cout<<randVal<< " ";

        Number num = {randVal};

        if(num>500){
            highList[highCount++] = num.value;
        }else{
            lowList[lowCount++]  = num.value;
        }
    }

    cout<<"\n\n<= 500: ";
    for(int i=0; i<lowCount; i++) cout<<lowList[i]<< " ";

    cout<<"\n> 500: ";
    for(int i=0; i<highCount; ++i) cout<<highList[i]<< " ";
    
    cout<<"\n";
    return 0;
}
