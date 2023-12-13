/*
The frequency of an element is the number of times it occurs in an array.

You are given an integer array nums and an integer k. In one operation, you can choose an index of nums and increment the element at that index by 1.

Return the maximum possible frequency of an element after performing at most k operations.

 

Example 1:

Input: nums = [1,2,4], k = 5
Output: 3
Explanation: Increment the first element three times and the second element two times to make nums = [4,4,4].
4 has a frequency of 3.
*/

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());

        long i=0,n=nums.size(),ans=1,sum=0;

        for(int j=0;j<n;j++){
            sum += nums[j];
            while((j-i+1)*nums[j]-sum > k ) sum -=nums[i++];
            ans = max(ans,j-i+1);
        }

        return (int)ans;
    }
};