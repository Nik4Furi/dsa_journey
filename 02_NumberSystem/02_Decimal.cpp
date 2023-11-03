#include <iostream>
#include<cmath>
using namespace std;

//----------------Here we convert a Binary number to decimal

int BinaryToDecimalToUseBitwise(int n){
    int ans = 0,i=0;

    while(n){
        int lastDigit = n%10;
        cout << lastDigit << " ";
        ans += (lastDigit * pow(2,i));
        n /= 10;
        i++;
    }
    return ans;
} //Time Complexity O(n),

int main(){

    int n;
    cout << "Enter a decimal number: ";
    cin >> n;
    
    cout << "Binary to Decimal of with use of bitwise operator "<< n << " is " << BinaryToDecimalToUseBitwise(n);
    

    return 0;
}