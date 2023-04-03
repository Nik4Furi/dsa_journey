#include <iostream>
using namespace std;

//Finding the power of 2
int power2(int n){
    //Base case
    if(n == 0) return 1;

    return 2*power2(n-1);
}

int main(){

    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    cout << "Power of 2 of "<<n << " is "<< power2(n);



    return 0;
}