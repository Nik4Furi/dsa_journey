#include <iostream>
using namespace std;

//Factorial of n is
int fact(int n){
    //base case
    if(n == 0 || n==1) return 1;

    //Recursion call
    return n*fact(n-1);
}

int main(){

    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    cout << "Factorial of "<<n << " is "<< fact(n);


    return 0;
}