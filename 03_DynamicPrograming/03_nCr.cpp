// Find nCr:
// formula is n! / ( (n-r)! * r! )

#include <iostream>
#include <vector>
#include <chrono> //used to calculate the time taken by the function

#include "00_GlobalFunctionsUsed.cpp" //use this file to calculate the factorial of number

using namespace std::chrono;
using namespace std;

// function to print the nCr using Recursion
// Time Complexity O(2^n) , Space Complexity O(k),k is call stack
int nCrRecu(int n, int r)
{
    // find the n value
    int FactN = FactorialRecu(n);
    int FactR = FactorialRecu(r);
    int DiffNR = FactorialRecu(n - r);

    // apply formula
    int ans = FactN / (DiffNR * FactR);
    return ans;
}


// function to print the nCr using Space Optimization
// Time Complexity O(n)
int nCrSpace(int n,int r)
{

    // Get starting timepoint
    auto start = high_resolution_clock::now();

    // find the n value
    int FactN = FactorialSpace(n);
    int FactR = FactorialSpace(r);
    int DiffNR = FactorialSpace(n - r);

    // apply formula
    int ans = FactN / (DiffNR * FactR);

    // Get ending timepoint
    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Time taken by 'nCrSpace' is: " << duration.count() << " microseconds" << endl;

    return ans;
}
 

int main()
{

    int n, r;
    cout << " Enter the number to print the nCr: ";
    cin >> n >> r;

    cout << endl;
    /*
    auto start = high_resolution_clock::now();

    cout << "nCr of " << n << " and " << r << " are using Recursion " << nCrRecu(n, r);
    cout << endl;
    // Get ending timepoint
    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;
    */

    //--------------------------- Doing the nCr Using nCrMemo ----------------------X

    // cout <<endl;

    /*
     // Get starting timepoint
    auto start = high_resolution_clock::now();

     cout << "nCr of "<< n << " is using Recursion With Memoization "<<nCrMemo(n,r);
     cout <<endl;

     // Get ending timepoint
     auto stop = high_resolution_clock::now();

     auto duration = duration_cast<microseconds>(stop - start);

     cout << "Time taken by 'nCrMemo': "
          << duration.count() << " microseconds" << endl;

    cout <<endl; 
    */


    // cout <<endl;

    //--------------------------- Doing the nCr Using nCrSpace ----------------------X
    cout << "nCr of " << n << " is using Space Optimization " << nCrSpace(n,r);

    cout << endl;

    return 0;
}