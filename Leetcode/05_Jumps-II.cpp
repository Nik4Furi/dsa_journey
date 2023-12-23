/*
You are given a 0-indexed array of integers nums of length n. You are initially positioned at nums[0].

Each element nums[i] represents the maximum length of a forward jump from index i. In other words, if you are at nums[i], you can jump to any nums[i + j] where:

0 <= j <= nums[i] and
i + j < n
Return the minimum number of jumps to reach nums[n - 1]. The test cases are generated such that you can reach nums[n - 1].

 

Example 1:

Input: nums = [2,3,1,1,4]
Output: 2
Explanation: The minimum number of jumps to reach the last index is 2. Jump 1 step from index 0 to 1, then 3 steps to the last index.
Example 2:

Input: nums = [2,3,0,1,4]
Output: 2
*/

//App-I: Use recursion, in every ith index, check a nested loop i+1 to i+j, where i+j<n, to achieve to n-1 index, TC O(N^2)

//App-II: Use a another array will store the maximum eles in respect of the current eles, and add in index to move nth array

#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    int jump(vector<int>& nums) {

        //base case
        if(nums[0] == 0) return -1;

        //first we need to finding the maximum, in respect of nums eles
        int n = nums.size();

        vector<int> dp(n,-1); //it will store respective maximum eles
        int maxiEle = INT_MIN;
        dp[0] = nums[0];

        for(int i=0;i<n;i++){

            dp[i] = max(maxiEle,nums[i]);
            if(nums[i] > maxiEle) maxiEle = nums[i];
        }

        //Now we want to finding maximum jumps
        int cntJumps=0,ind=0;

        while(ind < n || ind < maxiEle){
            ind += dp[ind];
            // cout << "Index val "<< ind << " ";
            
            cntJumps++;
            if(ind >= n-1) return cntJumps++;
        }

        return cntJumps+1;
        
    }
};


int main() {
   int n;
   cout << "Enter size of array: ";
   cin >> n;

   vector<int> arr(n,0);
    cout << "Enter eles of array"<<endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    Solution ob;
    cout << ob.jump(arr);


   return 0;
}

//Another Approach, TC O(n)
class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps=0,currEnd=0,curr=0;

        for(int i=0;i<nums.size()-1;i++){
            curr = max(curr,i+nums[i]);

            if(i == currEnd){
                jumps++;
                currEnd = curr;
            }
        }

        return jumps;
    }
};