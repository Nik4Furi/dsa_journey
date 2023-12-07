/*
Given an integer array nums, return the greatest common divisor of the smallest number and largest number in nums.

The greatest common divisor of two numbers is the largest positive integer that evenly divides both numbers.

 

Example 1:

Input: nums = [2,5,6,9,10]
Output: 2
Explanation:
The smallest number in nums is 2.
The largest number in nums is 10.
The greatest common divisor of 2 and 10 is 2.
*/

//Approach-I: to find the gcd, can check num is divisble by 1 to min(a,b), tC O(n)

//Approach-II: Using Euclidean’s theorem, tC O(logɸmin(a,b)), where ɸ is 1.61.

class Solution {

    //----------------- function to returning the gcd of two numbers
    int gcd(int a,int b){
        if(b == 0) return a;
        return gcd(b,a%b);
    }

public:
    int findGCD(vector<int>& nums) {
        //first find minimum and maximum element
        int mini = nums[0],maxi = nums[0];

        for(auto x:nums){
            mini = min(mini,x);
            maxi = max(maxi,x);
        }

        return gcd(mini,maxi);
    }
};