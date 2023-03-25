#include <iostream>
using namespace std;

int getSum(int arr[],int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
    
}

int main(){

    int arr[] = {2,3,4,1,9};
    int sum = getSum(arr,5);
    cout << sum;

    return 0;
}