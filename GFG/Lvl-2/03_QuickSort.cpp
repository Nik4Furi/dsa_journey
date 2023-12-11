/*
Quick Sort is a Divide and Conquer algorithm. It picks an element as a pivot and partitions the given array around the picked pivot.
Given an array arr[], its starting position is low (the index of the array) and its ending position is high(the index of the array).

Note: The low and high are inclusive.

Implement the partition() and quickSort() functions to sort the array.

Example 1:

Input:
N = 5
arr[] = { 4, 1, 3, 9, 7}
Output:
1 3 4 7 9

*/

//{ Driver Code Starts
#include <stdio.h>
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

// } Driver Code Ends
class Solution
{
public:
    // Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here

        // base case
        if (low >= high)
            return;

        // find pivot ind
        int pivot = partition(arr, low, high);

        // recursion call
        quickSort(arr, low, pivot - 1);

        quickSort(arr, pivot + 1, high);
    }

public:
    int partition(int arr[], int low, int high)
    {
        // Your code here

        // we cnt the no of eles, and place and pivot its right position
        int cnt = 0;

        for (int i = low + 1; i <= high; i++)
            if (arr[i] <= arr[low])
                cnt++;

        // place its right position
        int pivotIndex = low + cnt;

        swap(arr[pivotIndex], arr[low]);

        // Now follow on the condition, right and left side balance
        int s = low, e = high;

        while (s < pivotIndex && pivotIndex < e)
        {

            // if no need of swapping
            while (arr[s] <= arr[pivotIndex])
                s++;

            while (arr[e] > arr[pivotIndex])
                e--;

            if (s < pivotIndex && pivotIndex < e)
                swap(arr[s++], arr[e--]);
        }

        return pivotIndex;
    }
};

//{ Driver Code Starts.
int main()
{
    int arr[1000], n, T, i;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &n);
        for (i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        Solution ob;
        ob.quickSort(arr, 0, n - 1);
        printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends