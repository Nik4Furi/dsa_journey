// Question : https://practice.geeksforgeeks.org/problems/max-min/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

// Time Complexity : O(nlogn) // Can do O(N) also

int findSum(int A[], int N)
{
    // code here.

    sort(A, A + N);

    return A[N - 1] + A[0];
}