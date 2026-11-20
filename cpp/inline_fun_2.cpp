#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

class series{
    protected:
    double x, sum = 0.0;
    int term;
    
    inline double computeTerms(int power, double fact){
        return pow(x, power) / fact;
    }

    public:
    void calcualte(){
        cout<<"Enter the X and terms : ";
        cin>>x>>term;

        for(int i=0; i<term; i++){
            int power = (2*i)+1;
            int denomNo = power;

            double fact = 1;
            for(int j=1; j<=denomNo; j++){
                fact = fact * j;
            }

            if(i%2 == 0){
                sum += computeTerms(power, fact);
            }else{
                sum -= computeTerms(power, fact);
            }
        }
    }

    void dispaly(){
        cout<<"The sum = "<<sum;
    }

};
class derived : public series{
public:
    void saveFile(){
        ofstream fout("series.txt",ios::app);
        fout<<"X = "<<x<<","<<"Term = "<<term<<" Sum = "<<sum<<endl;
        fout.close();
        cout<<"\nSeries details saved to file."<<endl;
    }
};

int main(){
    derived obj1;
    obj1.calcualte();
    obj1.dispaly();
    obj1.saveFile();
    return 0;
}
