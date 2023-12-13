/*
Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

0 <= a, b, c, d < n
a, b, c, and d are distinct.
nums[a] + nums[b] + nums[c] + nums[d] == target
You may return the answer in any order.

 

Example 1:

Input: nums = [1,0,-1,0,-2,2], target = 0
Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
*/

//App-I: use 4 nested loops

//App-I: 3 nested loops
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        if(n <4) return {};
        
        vector<vector<int>> ans;

        sort(nums.begin(),nums.end());


        for(int a=0;a<n;a++){
            

            for(int b=a+1;b<n;b++){

                // int sumAB = nums[a]+nums[b];

                 long long newTarget = (long long)target - (long long)nums[a] - (long long)nums[b];

                int c=b+1,d=n-1;

                while(c < d){
                    // long long int sum = nums[a]+nums[b]+nums[c]+nums[d];
                    int sum =nums[c]+nums[d];

                   

                    if(sum > newTarget) d--;
                    else if(sum < newTarget) c++;

                    else {
                        ans.push_back({nums[a],nums[b],nums[c],nums[d]});

                        int tempInd1=c,tempInd2=d;

                        while(c < d && nums[c] == nums[tempInd1]) c++;
                        while(c < d && nums[d] == nums[tempInd2]) d--;
                    }
                }

                //Ignoring bth indexes
                while(b+1 < n && nums[b] == nums[b+1]) b++;
            }

            //Ignoring ath indexes
            while(a+1<n && nums[a] == nums[a+1]) a++;
        }   

        return ans;
    }
};