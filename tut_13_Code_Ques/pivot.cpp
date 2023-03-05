#include <iostream>
using namespace std;

int getPivot(int arr[], int n)
{
    int s = 0, e = n-1, m, ans;

    while (s <= e)
    {
        m = s + (e - s) / 2;

        if (arr[m] > arr[0])
        {
            s = m + 1;
        }
        else
            e = m;
    }
    return s;
}

int main()
{

    int arr[] = {7, 9, 1, 2, 3};
    cout << "Done exe " << endl;
    int pivot = getPivot(arr, 5);
    cout << "Pivot ele in arr is " << pivot << endl;

    return 0;
}