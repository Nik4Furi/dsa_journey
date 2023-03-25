#include<bits/stdc++.h>

using namespace std;

//Print 1D array
void printArr(int arr[],int n){

    for(int i=0;i<n;i++)
        cout << arr[i] << " ";

    cout << endl;
}

//Sum row wise
void sumRowWise(int arr[][3],int row,int col){
    int ans[row];
    
     for(int i=0;i<row;i++){
        int sum = 0;
        for(int j=0;j<col;j++)
            sum += arr[i][j];

        ans[i] = sum;
    }

    //Print the array
    printArr(ans,row);
}

//Largest row sum
int largestRowSum(int arr[][3],int row,int col){
    int maxi = INT_MIN;
    
     for(int i=0;i<row;i++){
        int sum = 0;
        for(int j=0;j<col;j++)
            sum += arr[i][j];

        maxi = max(maxi,sum);        
    }
    return maxi;
}

//Sum column wise
void sumColumnWise(int arr[][3],int row,int col){
    int ans[row];
    
    for(int j=0;j<col;j++){
        int sum = 0;
        for(int i=0;i<row;i++)
            sum += arr[i][j];

        ans[j] = sum;
    }

    //Print the array
    printArr(ans,col);
}

int main(){

    int arr[2][3];

    cout << "Entering Eles in 2D Array 2X3 "<< endl;

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
             cin >> arr[i][j];
        }
    }

    //Row wise sum
    // sumRowWise(arr,2,3);

    // cout << endl << "Sum column wise "<< endl;
    // sumColumnWise(arr,2,3);

    int ans = largestRowSum(arr,2,3);
    cout << endl << "Largest Row sum: " << ans<< endl;


    return 0;
}