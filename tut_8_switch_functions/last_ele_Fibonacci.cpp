#include <iostream>
using namespace std;

// Fibonacci series
int FibonacciSeries(int num)
{
    if (num <= 1)
        return num;
    return FibonacciSeries(num - 1) + FibonacciSeries(num - 1);
}

int lastEleFromFibona(int num)
{
    int ans = 0;
    if (num <= 2)
        return num / 2;
    // return ans + Fibona(n);
}

  int fib(int n){
        if (n <= 1)
            return n;
        return fib(n - 1) + fib(n - 2);
    }

int main()
{

    int num;
    cout << "Enter the value, in we find the last ele: ";
    cin >> num;

    // int ans = lastEleFromFibona(num);
    // cout << "Last ele of "<<num << " fibonacci series is "<< ans;

  
cout << fib(num);

    // int ans = FibonacciSeries(num);
    // cout << ans;
    return 0;
}