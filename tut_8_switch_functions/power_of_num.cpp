#include <iostream>
using namespace std;

//Find the power of num
int powerOfNum(int num, int k){
    int ans = 1;
    for (int i = 0; i < k; i++)
    {
        ans = ans * num;
    }
    return ans;
    
}

int main(){

    int num,k;
    cout << "Enter num, which want of power: ";
    cin >> num;

    cout << "Enter k, which want to power: ";
    cin >> k;

    int ans = powerOfNum(num,k);
    cout << num <<" power of "<<k << " is "<<ans << endl;;


    return 0;
}