#include <iostream>
using namespace std;

int getMini(int arr[], int n){
    int mini = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] < mini)
            mini = arr[i];
    }
    return mini;
    
}
int getMax(int arr[], int n){
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] > maxi)
            maxi = arr[i];
    }
    return maxi;
    
}

int main(){

    int arr[] = {2,3,4,1,9};
    int mini = getMini(arr,5);
    int maxi = getMini(arr,5);
     
     cout << mini << " " << maxi;

    return 0;
}