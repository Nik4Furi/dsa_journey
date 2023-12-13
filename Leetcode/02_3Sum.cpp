/*
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

 

Example 1:

Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation: 
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.
*/

//App-I: use three nested loops, tC O(n^3)

//Appr-II: in a loop, use two pointes, tC O(n^2)

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n = nums.size();
        //edge case
        if(n < 3) return {{}};

        vector<vector<int>> ans;

        sort(nums.begin(),nums.end());

        for(int i=0;i<n-1;i++){

            int low=i+1,high=n-1;

            while(low<high){
                int sum = nums[i] + nums[low]+nums[high];

                if(sum > 0) high--;
                else if(sum < 0) low++;

                else{
                    ans.push_back({nums[i],nums[low],nums[high]});
                    int temp1=low,temp2=high;

                    //ignore duplicates
                    while(low < high && nums[temp1] == nums[low]) low++;
                    while(low< high && nums[temp2] == nums[high]) high--;
                }

                //duplicates ignore
                while(i+1 < n && nums[i] == nums[i+1]) i++;
            }
        }

        return ans;
    }
};