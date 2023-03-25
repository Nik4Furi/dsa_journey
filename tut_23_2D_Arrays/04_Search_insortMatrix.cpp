#include <iostream>
using namespace std;

//Binary search in matrix,in row wise sorted matrix
int searchin2D(int arr[][4],int row,int col,int target){
    int s=0,e=col-1,m;

    while(s<=e){
        m = s + (e-s)/2;
        int ele = arr[m/col][m%col];
        if(ele == target) return m;
        else if(ele > target) s=m+1;
        else e = m-1;
    }
    return -1;

}

int main(){

    int arr[2][3];

    cout << "Entering Eles in 2D Array 3X4 "<< endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
             cin >> arr[i][j];
        }
    }
    int target;
    cout << endl << "Target is "<< endl;
    cin >> target;

    // searchin2D(arr,3,4,target);
    // cout << endl << "Search in row wise sorted matrix: " ans << endl;
    return 0;
}