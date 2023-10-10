// Function to return length of longest subsequence of consecutive integers.
int findLongestConseqSubseq(int arr[], int N)
{
    // Your code here
    // base case
    if (N == 1)
        return 1;

    int longest = 1;
    unordered_set<int> st;

    for (int i = 0; i < N; i++)
        st.insert(arr[i]);

    // Now to find the iterator which can be move to count
    for (auto it : st)
    {
        if (st.find(it - 1) == st.end())
        {
            int x = it, cnt = 1;

            while (st.find(x + 1) != st.end())
                x++, cnt++;

            longest = max(longest, cnt);
        }
    }

    return longest;
}