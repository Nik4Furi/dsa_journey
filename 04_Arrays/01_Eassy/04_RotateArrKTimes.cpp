/*
Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

 

Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
Example 2:

Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation: 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]
*/

//To solve this question we have multiple approaches
//App-I: Use a array whose size is n, and we insert eles , Tc O(n), SC(n)
// Condtion arr[i+k] = nums[(i+k)%n]; 

//App-II: First we swap n-k%n eles or can say indexes, and then we start i =n-k%n to n eles, TC O(n), sC O(1)
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (k%n == 0) return;
        int first = 0, middle = n-k%n, last = n;
        int next = middle;
        while(first != next) {
            swap (nums[first++], nums[next++]);
            if (next == last) next = middle;
            else if (first == middle) middle = next;
        }
    }
}; 

//App-II: Use reversing methodology, tC O(3n), sC O(1)
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        k%= nums.size();

        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
    }
}; 