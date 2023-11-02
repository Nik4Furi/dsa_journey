void travel(vector<vector<string>> &list, vector<vector<string>> &ans, int i, vector<string> curr)
{

    if (i == list.size())
    {
        ans.push_back(curr);
        return;
    }
    for (auto it : list[i])
    {
        curr.push_back(it);
        travel(list, ans, i + 1, curr);
        curr.pop_back();
    }
}
vector<vector<string>> sentences(vector<vector<string>> &list)
{

    vector<vector<string>> ans;
    travel(list, ans, 0, {});
    return ans;
}