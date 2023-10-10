#include <algorithm>

// Function to find maximum product subarray
long long maxProduct(vector<int> arr, int n)
{
    // code here

    long long maxi = arr[0];
    long long prefix = 1, suffix = 1;

    for (int i = 0; i < n; i++)
    {
        if (prefix == 0)
            prefix = 1;
        if (suffix == 0)
            suffix = 1;

        prefix *= arr[i];
        suffix *= arr[n - i - 1];

        maxi = max({prefix, suffix, maxi});
    }

    return maxi;
}