#include<iostream>
#include<vector>

// function to print the factorial using Recursion
// Time Complexity O(2^n) , Space Complexity O(k),k is call stack
int FactorialRecu(int n)
{

    // base case
    if (n <= 2)
        return n;

    int ans = n * FactorialRecu(n - 1);
    return ans;
}

// function to prin the factorial using Recursion + Memoization
// Time Complexity O(n) , Space Complexity O(n)
// int FactorialMemo(int n, vector<int> &dp)
// {

//     // base case
//     if (n <= 2)
//         return n;

//     if (dp[n] != -1)
//         return dp[n];

//     dp[n] = n * FactorialMemo(n - 1, dp);
//     return dp[n];
// }


// function to print the factorial using Space Optimization
// Time Complexity O(n)
int FactorialSpace(int n)
{

    if (n == 0)
        return 1;

    int prev = 1;

    for (int i = 2; i <= n; i++)
    {
        int curr = i * prev;

        prev = curr;
    }

       return prev;
}
