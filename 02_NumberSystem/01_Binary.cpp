
#include <iostream>
#include<algorithm>
using namespace std;

//Here we convert a Decimal number to binary
string DecimalToBinary (int n){
    string ans ="";

    if(n <= 1){
        ans = to_string(n);
        return ans;
    }

    
    while(n){
        int digit = n/2;
        int remainder = n%2;
        ans += to_string(remainder) ;
        n = digit;
    }

    reverse(ans.begin(),ans.end());
   return ans;
} // Time Complexity O(n), space is O(1), not include ans space

string DecimalToBinaryUseBitwise(int n){
     string ans ="";

    if(n <= 1){
        ans = to_string(n);
        return ans;
    }

    while(n){
        int digit = n&1;
        ans += to_string(digit);
        n >>=1;
    }
   reverse(ans.begin(),ans.end());
   return ans;
} //Time Complexity O(n), but comparitivly less amout of resources because of use of the AND and Shift operations(bitwise operator).
// That was nearly to machine code


int main(){

    int n;
    cout << "Enter a decimal number: ";
    cin >> n;
    
    cout << "Decimal to binary of without use of bitwise operator "<< n << " is " << DecimalToBinary(n);
    cout <<endl;
    cout << "Decimal to binary of with use of bitwise operator "<< n << " is " << DecimalToBinaryUseBitwise(n);
    

    return 0;
}