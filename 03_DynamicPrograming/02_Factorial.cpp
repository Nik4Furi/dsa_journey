// Factorial of a number:
// Ex- n=5 , factorial 5*4*3*2*1 = 120

#include <iostream>
#include <vector>
#include <chrono> //used to calculate the time taken by the function

using namespace std::chrono;
using namespace std;

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
int FactorialMemo(int n, vector<int> &dp)
{

    // base case
    if (n <= 2)
        return n;

    if (dp[n] != -1)
        return dp[n];

    dp[n] = n * FactorialMemo(n - 1, dp);
    return dp[n];
}

// function to prin the factorial using Recursion + Tabulation
// Time Complexity O(n) , Space Complexity O(n)
int FactorialTabu(int n)
{

    // Get starting timepoint
    auto start = high_resolution_clock::now();

    // base case
    vector<int> dp(n + 1, -1);
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= n; i++)
        dp[i] = i * dp[i - 1];

    // Get ending timepoint
    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Time taken by 'FactorialTabu': " << duration.count() << " microseconds" << endl;

    return dp[n];
}

// function to print the factorial using Space Optimization
// Time Complexity O(n)
int FactorialSpace(int n)
{

    // Get starting timepoint
    auto start = high_resolution_clock::now();

    if (n == 0)
        return 1;

    int prev = 1;

    for (int i = 2; i <= n; i++)
    {
        int curr = i * prev;

        prev = curr;
    }

    // Get ending timepoint
    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Time taken by 'FactorialSpace' is: " << duration.count() << " microseconds" << endl;

    return prev;
}

int main()
{

    int n;
    cout << " Enter the number to print the factorial: ";
    cin >> n;

    cout << endl;
    /* auto start = high_resolution_clock::now();

  cout << "factorial of "<< n << " is using Recursion "<<FactorialRecu(n);

   // Get ending timepoint
   auto stop = high_resolution_clock::now();

   auto duration = duration_cast<microseconds>(stop - start);

   cout << "Time taken by function: "
        << duration.count() << " microseconds" << endl;  */

    //--------------------------- Doing the Factorial Using FactorialMemo ----------------------X

    // cout <<endl;

    /* // Get starting timepoint
    auto start = high_resolution_clock::now();

     vector<int> dp(n+1,-1);
     cout << "factorial of "<< n << " is using Recursion With Memoization "<<FactorialMemo(n,dp);
     cout <<endl;

     // Get ending timepoint
     auto stop = high_resolution_clock::now();

     auto duration = duration_cast<microseconds>(stop - start);

     cout << "Time taken by 'FactorialMemo': "
          << duration.count() << " microseconds" << endl;

    cout <<endl; */

    //--------------------------- Doing the Factorial Using FactorialTabu ----------------------X
    // cout << "factorial of " << n << " is using Recursion With Tabulation " << FactorialTabu(n);

    // cout <<endl;

    //--------------------------- Doing the Factorial Using FactorialSpace ----------------------X
    cout << "factorial of " << n << " is using Space Optimization " << FactorialSpace(n);

    cout << endl;

    return 0;
}