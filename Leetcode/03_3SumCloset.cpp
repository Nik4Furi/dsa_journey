/*
Given an integer array nums of length n and an integer target, find three integers in nums such that the sum is closest to target.

Return the sum of the three integers.

You may assume that each input would have exactly one solution.

 

Example 1:

Input: nums = [-1,2,1,-4], target = 1
Output: 2
Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
*/

//Appr-I: Use 3 nested loops

//Appr-II: Use 3 sum problem

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();

        if(n<3) return -1;
        sort(nums.begin(),nums.end());
        int closet = nums[0]+nums[1]+nums[2];


        for(int i=0;i<n-1;i++){
            int low = i+1,high=n-1;

            while(low<high){
                int sum  = nums[i]+nums[low]+nums[high];

                if(sum == target) return sum;

                if(sum > target) high--;
                else low++;

                if(abs(sum-target) < abs(closet-target)) {

                    closet = sum;

                    //ignore duplicates
                    // int temp1= low,temp2=high;

                    // while(low < high && nums[low] == nums[temp1]) low++;
                    // while(low < high && nums[high] == nums[temp2]) high--;
                }

                //ignore duplicates
                if(i+1 <n && nums[i] == nums[i+1]) i++;
                          
            }
        }

        return closet;
    }
};