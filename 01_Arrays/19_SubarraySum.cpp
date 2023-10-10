// Function to check whether there is a subarray present with 0-sum or not.
bool subArrayExists(int arr[], int n)
{
    // Your code here
    unordered_set<int> s;
    int prefix_sum = 0;

    for (int i = 0; i < n; i++)
    {
        prefix_sum += arr[i];

        if (prefix_sum == 0)
            return true;

        if (s.find(prefix_sum) != s.end())
            return true;

        s.insert(prefix_sum);
    }

    return false;
}