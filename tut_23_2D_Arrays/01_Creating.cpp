#include <iostream>
using namespace std;

void Print2DArr(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){

    int arr[2][3];

    cout << "Entering Eles in 2D Array "<< endl;

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
             cin >> arr[i][j];
        }
    }

    cout << endl << "Printing 2D Array "<< endl;

    Print2DArr(arr,2,3);

    return 0;
}