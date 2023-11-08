#include <iostream>
#include <cmath>
#include <algorithm>
#include<string>
#include<map>
// #include
using namespace std;

//----------------Here we convert a Binary number to decimal

int BinaryToDecimalToUseBitwise(int n)
{
    int ans = 0, i = 0;

    while (n)
    {
        int lastDigit = n % 10;
        cout << lastDigit << " ";
        ans += (lastDigit * pow(2, i));
        n /= 10;
        i++;
    }
    return ans;
} // Time Complexity O(n),

//----------------Here we convert a Octal number to decimal
int OctalToDecimalToUseBitwise(int n)
{

    int ans = 0, i = 0;

    while (n)
    {
        int lastDigit = n % 10;
        ans += (lastDigit * pow(8, i));
        n /= 10;
        i++;
    }
    return ans;

} // Time Complexity O(n),

//----------------Here we convert a HexaDecimal number to decimal
int HexaDecimalToDecimalToUseBitwise(string n)
{

    int ans = 0, po = 0;
    unordered_map<char, int> mp{
        {'A', 10},
        {'B', 11},
        {'C', 12},
        {'D', 13},
        {'E', 14},
        {'F', 15},
    };

    for (int i = n.length() - 1; i >= 0; i--)
    {
        char ele = n[i];

        // first convert a last char to digit
        if (ele >= 48 && ele <= 57)
        {
            // already a digit, no need to convert
            int lastDigit = stoi(ele);
            cout << " last digit of digit " << lastDigit << " ";
            ans += lastDigit * pow(16, po);
        }
        else
        {
            // its not a number, then provide it to a digit
            int lastDigit = mp[ele];
            cout << " last digit of digit " << lastDigit << " ";
            ans += lastDigit * pow(16, po);
        }

        po++;
    }
    return ans;

} // Time Complexity O(n),

int main()
{

    // int n;
    // cout << "Enter a binary number to convert in decimal ";
    // cin >> n;

    // cout << "Binary to Decimal of with use of bitwise operator "<< n << " is " << BinaryToDecimalToUseBitwise(n);
    // int n;
    //     cout << "Enter a octal number: to convert in decimal ";
    //     cin >> n;

    // cout << "Converting Octal number "<< n << " to Decimal " << OctalToDecimalToUseBitwise(n);

    string n;
    cout << "Enter a hexadecimal number: to convert in decimal ";
    cin >> n;

    cout << "Converting HexaDecimal number " << n << " to Decimal " << HexaDecimalToDecimalToUseBitwise(n);

    cout << endl;

    return 0;
}