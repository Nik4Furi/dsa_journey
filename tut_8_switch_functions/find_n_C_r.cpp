#include <iostream>
using namespace std;

//Find the factorial of the num
int fact(int num){
    if(num == 1 || num == 0)
        return 1;
    return num * fact(num-1);
    
}

//Find the nCr of the num
int nCr(int num,int r){
    int ans ;
    ans = fact(num)/(fact(r)* fact(num-r));
    return ans;
}

int main(){

    int n,r;
    cout << "Enter value of n: ";
    cin >> n;

    cout << "Enter value of r: ";
    cin >> r;

    int ans = nCr(n,r);
    cout << "n_C_r of "<<n << " and "<<r <<" is "<< ans;

    return 0;
}