#include <iostream>
using namespace std;

void ReverseArr(int arr[],int n){
    for (int i = 0; i < n/2; i++)
    {
        int temp;
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    
}

int main(){

    int n;
    cin >> n ;

    int arr[n];

    for (int  i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ReverseArr(arr,n);
    
    for (int  i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}