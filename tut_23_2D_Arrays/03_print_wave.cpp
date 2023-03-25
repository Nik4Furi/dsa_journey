#include <iostream>
using namespace std;

void printWave(int arr[][3],int row,int col){
    for(int i=0;i<col;i++){
        if (i%2 == 0){
            for (int j = 0; j < row; j++)
                cout << arr[j][i] << endl;
        cout << " ";
        }
        else {
            for (int j = row-1; j >=0; j--)
                cout << arr[j][i] << endl;
            cout << " ";            
        }
        
    }
}

int main(){

    int arr[3][3];

    cout << "Entering Eles in 2D Array 3X3 "<< endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
             cin >> arr[i][j];
        }
    }

    //Converting into wave
    cout << endl << "Printing 2D Array after converting into wave "<< endl;
    printWave(arr,3,3);



    return 0;
}