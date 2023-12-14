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
    //------------------function to implement selection sort
    void SelectionSort(int *&arr, int n)
    {
        for (int i = 0; i < n; i++)
        {
            int maxi = i;

            for (int j = i + 1; j < n; j++)
                if (arr[maxi] >= arr[j])
                    maxi = j;

            // swap for smallest ele at its right position
            if (maxi != i)
                swap(arr[i], arr[maxi]);
        }
    }
};

int main()
{

    int n;
    cout << "Enter the size of array to sort: "<<endl;

    cin >> n;

    int *arr = new int[n];

    cout << "Enter the elements to sort: "<<endl;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    //---------- Start to implement the solution
    Solution ob;

    ob.SelectionSort(arr, n);

    printArray(arr, n);

    return 0;
}