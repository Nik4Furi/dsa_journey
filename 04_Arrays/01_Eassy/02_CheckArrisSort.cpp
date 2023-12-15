/*
Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.

There may be duplicates in the original array.

Note: An array A rotated by x positions results in an array B of the same length such that A[i] == B[(i+x) % A.length], where % is the modulo operation.

 

Example 1:

Input: nums = [3,4,5,1,2]
Output: true
Explanation: [1,2,3,4,5] is the original sorted array.
You can rotate the array by x = 3 positions to begin on the the element of value 3: [3,4,5,1,2].
Example 2:

Input: nums = [2,1,3,4]
Output: false
Explanation: There is no sorted array once rotated that can make nums.
*/

/*//Approach-I: Check nested loops, and each ele, is 

1. first is less & 
2. Than may by greater 
    return true 

& if
1. First is greater (no problem)
2. But now is any condition is less
    return false;

tC O(n^2) */



class Solution {
public:
    bool check(vector<int>& nums) {
        int cnt = 0,n=nums.size();

        for(int i=0;i<n;i++){
            if(nums[i] > nums[(i+1)%n]) cnt++;

            if(cnt > 1) return false;
        }

        return true;
    }
};