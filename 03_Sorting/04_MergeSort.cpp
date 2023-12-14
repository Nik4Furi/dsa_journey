#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

//-------------- Class to implement the solutions
class Solution
{

    //---------------function to merge two sorted arrays
    void mergeArrs(int *&arr,int n,int s,int mid,int e){
        int left = s,right=mid+1;

        vector<int> temp;

        while(left <=mid && right <=e){
            if(arr[left] <= arr[right])
                temp.push_back(arr[left++]);
            else temp.push_back(arr[right++]);
        }

        //if left is >
        while(left <=mid)
            temp.push_back(arr[left++]);

        //if right is >
        while(right <=e)
            temp.push_back(arr[right++]);

        //now push all eles in arr
        for(int i=s;i<=e;i++){
            arr[i] = temp[i-s];
        }
    }

public:
    //------------------function to implement Merge sort
    void MergeSort(int *&arr, int n,int s,int e)
    {
        //base case
        if(s >=e )return;

        int mid = s+(e-s)/2;

        //left side mergesort
        MergeSort(arr,n,s,mid);

        //right side mergeSort
        MergeSort(arr,n,mid+1,e);

        //---------function to merge two sorted arrays
        mergeArrs(arr,n,s,mid,e);
        
    }
};

int main()
{

    int n;
    cout << "Enter the size of array to sort: " << endl;

    cin >> n;

    int *arr = new int[n];

    cout << "Enter the elements to sort: " << endl;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    //---------- Start to implement the solution
    Solution ob;

    ob.MergeSort(arr, n,0,n-1);

    printArray(arr, n);

    return 0;
}