#include <iostream>
using namespace std;

bool isSearch(int arr[],int n,int k){
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            return true;
        }
        
    }
    return false;    
}

int isSearch_ind(int arr[],int n,int k){
    int ind=-1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
            ind = i;
    }
    return ind;    
}



int main(){

    int n,k;
    cout << "Enter the length or array and value of target: ";
    cin >> n >>k;

    int arr[n];

    for (int  i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // if (isSearch(arr,n,k))
    // {
    //     cout << k << " is found";
    // }
    // else{
    //     cout << k << " is not found";
    // }

    int ind = isSearch_ind(arr,n,k);
    // cout << ind << endl;  

    return 0;
}