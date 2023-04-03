#include <iostream>
using namespace std;

int countWays(int n){
    if(n <0) return 0;
    if(n == 0) return 1;

    int ans = countWays(n-1)+countWays(n-2);
    return ans;
}

int main(){

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    //Count ways to reach out the nth stairs
    int ans = countWays(n);
    cout << ans << " ways to reach at "<<n << "th stairs";

    return 0;
}