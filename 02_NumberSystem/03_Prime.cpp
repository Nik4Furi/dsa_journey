#include <iostream>
#include<math.h>
using namespace std;

//--------function to find a number is prime or not
string isPrime(int n){ // O(sqrt(n))
    if(n <= 1) return "Prime";

    for(int num = 2;num<=sqrt(n);num++){
        if(n%num == 0) return "Not Prime";
    }

    return "Prime";
} //Time Complexity is O(sqrt(n))


string isPrime_2(int n){ // O(n))
    if(n <= 1) return "Prime";

    for(int num = 2;num<n;num++){
        if(n%num == 0) return "Not Prime";
    }

    return "Prime";
} //Time Complexity is O(sqrt(n))

int main(){

    int n;
    cout << "Enter the number to check is prime: ";
    cin >> n;

    // cout << "The number "<< n << " is "<< isPrime_2(n);
    cout << "The number "<< n << " is "<< isPrime(n);
    

    return 0;
}