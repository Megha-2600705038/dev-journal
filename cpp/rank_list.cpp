#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;

    string name[100];
    int rollNum[100];
    float percentage[100];
    float total[100];
    bool passed[100];

    for(int i=0;i<n;i++){
        cout << "\n--- Student " << i + 1 << " ---\n";

        cout<< "Name: ";
        cin>>name[i];

        cout<<"Roll Number: ";
        cin>>rollNum[i];

        cout<<"Enter mark of 3 subject(outof 100):\n";
        float m1,m2,m3;

        cout<<"Subject 1: ";
        cin>>m1;
        cout<<"Subject 2: ";
        cin>>m2;
        cout<<"Subject 3: ";
        cin>>m3;

        total[i] = m1 + m2 + m3;
        percentage[i] = (total[i]/300.0)*100.0;

        if(m1>=40 && m2>=40 && m3>=40){
            passed[i] = true;
        }else{
            passed[i] = false;
        }
    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){

            if (total[j] < total[j + 1]) {

                float tempTotal = total[j];
                total[j] = total[j + 1];
                total[j + 1] = tempTotal;

                float tempPct = percentage[j];
                percentage[j] = percentage[j + 1];
                percentage[j + 1] = tempPct;

                string tempName = name[j];
                name[j] = name[j + 1];
                name[j + 1] = tempName;

                int tempRoll = rollNum[j];
                rollNum[j] = rollNum[j + 1];
                rollNum[j + 1] = tempRoll;

                bool tempPass = passed[j];
                passed[j] = passed[j + 1];
                passed[j + 1] = tempPass;
            }
        }
    }

    cout << "        RANK LIST (PASSED STUDENTS)      \n";
    cout << "=========================================\n";
    cout << "Rank\tRoll No\tName\tTotal\tPercentage\n";
    cout << "-----------------------------------------\n";

    int rank = 1;
    for (int i = 0; i < n; i++) {
        if (passed[i] == true) {
            cout << rank << "\t" 
                 << rollNum[i] << "\t" 
                 << name[i] << "\t" 
                 << total[i] << "\t" 
                 << percentage[i] << "%\n";
            rank++;
        }
    }
    return 0;
}
