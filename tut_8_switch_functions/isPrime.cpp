#include <iostream>
using namespace std;

//Checking the function is prime
bool isPrime(int num){
    for (int i = 2; i < num-1; i++){
        if (num%i == 0)
            return false;        
    }
    return true;    
}

int main(){

    int num;
    cout << "Enter the value, to check this prime or not: ";
    cin >> num;
    
    if(isPrime(num))
        cout << num << " is prime";
    else cout << num << " is not prime";

    return 0;
}