/*
Given an integer x, return true if x is a 
palindrome
, and false otherwise.

 

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
*/

//Approach-I: Convert  number to string, and check string is palindrom, tC O(n), sC O(n)
//Approach-II: Create a another number, and reverse number, check is equal form actaul value, tC O(logn)

class Solution {
public:
    bool isPalindrome(int x) {
           if (x < 0) {
            return false;
        }
        
        int original = x;
        long long reverse = 0;
        
        while (x > 0) {
            int digit = x % 10;
            reverse = reverse * 10 + digit;
            x /= 10;
        }
        
        return original == reverse;
    }
};