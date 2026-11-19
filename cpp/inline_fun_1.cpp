//s = 1-x^2/2!+x^4/4!

#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

class Series{
    protected:
    double x, sum = 0.0;
    int term;

    inline double computeTerms(int power, double fact){
        return pow(x, power)/fact;
    }

    public:
    void calculate(){
        cout<<"Enter the X and terms : ";
        cin>>x>>term;
        for(int i=0; i<term; i++){
            int power = 2 * i;
            int denomNo = power;

            double fact = 1;
            for(int j=1; j<=denomNo; j++){
                fact *= j;
            }
            if(i%2 == 0){
                sum += computeTerms(power, fact);
            }else{
                sum -= computeTerms(power, fact);
            }
        }
    }

    void diaplay(){
        cout<<"The series sum = "<<sum<<endl;
    }
};

class FileSeries : public Series{
    public:
    void saveFile(){
        ofstream fout("series1.txt", ios::app);
        fout<<"X = "<<x<<","<<"Terms = "<<" Sum = "<<sum<<endl;
        fout.close();
        cout<<"Successfully saved to file.";
    }
};

int main(){
    FileSeries obj;
    obj.calculate();
    obj.diaplay();
    obj.saveFile();
    return 0;
}
