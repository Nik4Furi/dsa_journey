// Fibonacci Series:
// Ex- n=5 , series is 0,1,1,2,3

#include <iostream>
#include <vector>
using namespace std;

// function to prin the fibonacci series using Recursion
// Time Complexity O(2^n) , Space Complexity O(k),k is call stack
int FibonacciSeriesRecu(int n)
{

    // base case
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;

    int ans = FibonacciSeriesRecu(n - 1) + FibonacciSeriesRecu(n - 2);
    return ans;
}

// function to prin the fibonacci series using Recursion + Memoization
// Time Complexity O(n) , Space Complexity O(n)
int FibonacciSeriesMemo(int n, vector<int> &dp)
{

    // base case
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;

    if (dp[n] != -1)
        return dp[n];

    dp[n] = FibonacciSeriesMemo(n - 1, dp) + FibonacciSeriesMemo(n - 2, dp);
    return dp[n];
}

// function to prin the fibonacci series using Recursion + Tabulation
// Time Complexity O(n) , Space Complexity O(n)
int FibonacciSeriesTabu(int n)
{
    // base case
    vector<int> dp(n + 1, -1);
    dp[0] = 0;
    dp[1] = 0;
    dp[2] = 1;

    for (int i = 3; i <= n; i++)
        dp[i] = dp[i - 1] + dp[i - 2];

    return dp[n];
}

// function to print the fibonacci series using Space Optimization
// Time Complexity O(n)
int FibonacciSeriesSpace(int n)
{

    int prev2 = 0, prev1 = 1;

    for (int i = 3; i <= n; i++)
    {
        int curr = prev1 + prev2;

        prev2 = prev1;
        prev1 = curr;
    }

    return prev1;
}

int main()
{

    int n;
    cout << " Enter the number to print the Fibonacci Series: ";
    cin >> n;

    // cout << "Fibonacci series of "<< n << " is using Recursion "<<FibonacciSeriesRecu(n);
    cout << endl;

    // vector<int> dp(n+1,-1);
    // cout << "Fibonacci series of "<< n << " is using Recursion With Memoization "<<FibonacciSeriesMemo(n,dp);

    // cout <<endl;
    // cout << "Fibonacci series of "<< n << " is using Recursion With Tabulation "<<FibonacciSeriesTabu(n);

    cout << endl;
    cout << "Fibonacci series of " << n << " is using Space Optimization " << FibonacciSeriesSpace(n);

    cout << endl;

    return 0;
}