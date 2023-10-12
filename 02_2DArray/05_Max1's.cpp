
int rowWithMax1s(vector<vector<int>> arr, int n, int m)
{
    // code here
    int cnt = 0, top = 0, right = m - 1, ans = 0;

    while (right >= 0 && top <= n - 1)
    {
        if (arr[top][right] == 1)
            ans = top, right--;

        else
            top++;
    }

    if (right == m - 1)
        return -1;

    return ans;
}