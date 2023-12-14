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
    //------------------function to implement Insertion sort, famous for shifting
    void InsertionSort(int *&arr, int n)
    {
        for (int i = 0; i < n; i++)
        {
            int j = i - 1;
            int curr = arr[i];

            while (j >= 0 && arr[j] > curr)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = curr;
        }
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

    ob.InsertionSort(arr, n);

    printArray(arr, n);

    return 0;
}