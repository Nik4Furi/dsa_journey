#include <iostream>
using namespace std;

//Binary search implement
int BinarySearch(int arr[],int n , int target){
    int s=0,e=n-1,m;

    while (s<=e)
    {
        m = s + (e-s)/2;

        if(arr[m] == target)
            return m;
        else if(arr[m] > target)
            e = m-1;
        else s = m+1;
    }
    return -1;
    
}

int main(){

    int arr [] = {1,2,3,4,5};
    int arr1 [] = {1,2,3,4,5,8};

    int ind = BinarySearch(arr,5,4);
    int ind1 = BinarySearch(arr1,6,7);

    cout << "Index of arr of founded element: "<< ind << endl;
    cout << "Index of arr of founded element: "<< ind1 << endl;

    return 0;
}