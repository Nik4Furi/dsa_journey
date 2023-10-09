// Function to merge the arrays.
void merge(long long arr1[], long long arr2[], int n, int m)
{
    // code here
    int endArr1 = n - 1, startArr2 = 0;

    // We want to insert all thses in arr1
    while (endArr1 >= 0 && startArr2 < m)
    {
        if (arr1[endArr1] > arr2[startArr2])
            swap(arr1[endArr1], arr2[startArr2]);
        endArr1--, startArr2++;
    }

    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
}