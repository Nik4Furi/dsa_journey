int smallestSubWithSum(int arr[], int n, int x)
{
    // Your code goes here
    int currentSum = 0;
    int minLen = INT_MAX;
    int left = 0;

    for (int right = 0; right < n; right++)
    {
        currentSum += arr[right];

        while (currentSum > x)
        {
            minLen = min(minLen, right - left + 1);
            currentSum -= arr[left];
            left++;
        }
    }

    return minLen != INT_MAX ? minLen : 0;
}