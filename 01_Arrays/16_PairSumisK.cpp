
int getPairsCount(int arr[], int n, int k)
{
    // code here

    int cnt = 0;
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int ele = arr[i];
        int diff = k - ele;

        // find the diff of ele in map, and add its frequency
        if (mp.count(diff))
            cnt += mp[diff];

        mp[ele]++;
    }

    return cnt;
}