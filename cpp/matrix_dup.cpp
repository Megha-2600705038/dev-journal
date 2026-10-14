#include <iostream>
using namespace std;

int main(){
    int row = 3,cols = 3,value = -1;
    int matrix[row][cols] = {{1,2,3},{2,4,7},{6,1,8}};

    for(int i=0;i<row;i++){
        for(int j=0;j<cols;j++){

            if(matrix[i][j] == value) continue;

            bool duplicate = false;

            for(int r=0;r<row;r++){
                for(int c=0;c<cols;c++){
                    if (matrix[i][j] == matrix[r][c] && (r > i || (r == i && c > j))){
                        cout<<"Duplicate elements:"<<matrix[r][c]<<"\n";

                        matrix[r][c] = value;
                        duplicate = true;
                        break; 
                    }
                }
                if(duplicate) break;
            }
        }
    }

    cout << "Modified Matrix:\n";
    for(int i=0;i<row;i++){
        for(int j=0;j<cols;j++){
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\nTranspose Matrix:\n";
    for(int j=0;j<cols;j++){
        for(int i=0;i<row;i++){
            cout<<matrix[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
