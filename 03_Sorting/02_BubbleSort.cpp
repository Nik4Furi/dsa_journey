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

public:
    //------------------function to implement Bubble sort
    void BubbleSort(int *&arr, int n)
    {
        for (int i = n - 1; i >= 0; i--)
        {
            // make optimization
            bool isSwap = false;

            for (int j = 0; j <= i - 1; j++)
                if (arr[j] > arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]); // greater ele at its right position
                    isSwap = true;
                }
            if (isSwap == false) //if array is sorted than tC O(n)
                break;
        }
    }

    //-----------Function of bubble sort with recursion
    void recBubbleSort(int* &arr,int n){
        //base case
        if(n == 1) return;

        for(int j=0;j<n-2;j++){
            if(arr[j] > arr[j+1]) swap(arr[j],arr[j+1]);
        }

        recBubbleSort(arr,n-1);
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

    // ob.BubbleSort(arr, n); //bubble sort

    ob.recBubbleSort(arr,n); //recursion bubble sort

    printArray(arr, n);

    return 0;
}