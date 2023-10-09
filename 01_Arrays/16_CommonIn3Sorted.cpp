vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
{
    // code here.
    map<int, int> mp;
    int m = max(max(n1, n2), n3);
    for (int i = 0; i < m; i++)
    {
        if ((i < n1 && (i == 0 || A[i] != A[i - 1])))
        {
            mp[A[i]]++;
        }
        if ((i < n2 && (i == 0 || B[i] != B[i - 1])))
        {
            mp[B[i]]++;
        }
        if ((i < n3 && (i == 0 || C[i] != C[i - 1])))
        {
            mp[C[i]]++;
        }
    }
    vector<int> ans;
    for (auto it : mp)
    {
        if (it.second == 3)
        {
            ans.push_back(it.first);
        }
    }
    return ans;
}