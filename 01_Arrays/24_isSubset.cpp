string isSubset(int a1[], int a2[], int n, int m)
{
    if (m > n)
        return "No";

    unordered_map<int, int> mp;
    bool isTrue = true;

    for (int i = 0; i < m; i++)
        mp[a2[i]]++;

    for (int i = 0; i < n; i++)
    {
        if (mp.find(a1[i]) != mp.end() && mp[a1[i]] >= 1)
            mp[a1[i]]--;
    }

    for (auto it : mp)
    {
        if (it.second != 0)
            return "No";
    }

    return "Yes";
}