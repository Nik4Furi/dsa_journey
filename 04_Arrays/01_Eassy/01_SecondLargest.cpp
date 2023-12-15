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
    int SecondLargest(int *&arr, int n) //tC O(n)
    {
        int largest=INT_MIN,secondLarg=INT_MIN;

        for(int i=0;i<n;i++){

            if(arr[i] > largest){
                secondLarg = largest;
                largest = arr[i];
            }

            else if(arr[i] > secondLarg && arr[i] != largest)
                secondLarg = arr[i];
        }

        return secondLarg;
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

    cout << ob.SecondLargest(arr, n);

    return 0;
}