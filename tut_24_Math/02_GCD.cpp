#include <iostream>
using namespace std;

//finding the the gcd of the numbers
int gcd(int a,int b){
    //Edge cases
    if(a==b) return a;
    if(a==0) return b;
    if(b==0) return a;

    while(a!=b){
        if(a>b) a=a-b;
        else b= b-a;
    }
    return a;
}

//finding gcd recursivly
int solve(int a,int b){
    //Edge cases
    if(a==b) return a;
    if(a==0) return b;
    if(b==0) return a;

    if(a>b)
        return solve(a-b,b);
    return solve(a,b-a);
}

int main(){

    int a,b;
    cout << "Enter the numbers for finding the gcd: ";
    cin >> a >> b;

    //GCD 
    // cout << "GCD of the numbers without recursivly"<< a << " and " << b << " is "<<gcd(a,b);
    cout << "GCD of the numbers with recursivly"<< a << " and " << b << " is "<<solve(a,b);

    return 0;
}