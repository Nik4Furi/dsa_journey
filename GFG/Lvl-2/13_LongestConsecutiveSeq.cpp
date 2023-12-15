/*
Given an array of positive integers. Find the length of the longest sub-sequence such that elements in the subsequence are consecutive integers, the consecutive numbers can be in any order.
 

Example 1:

Input:
N = 7
a[] = {2,6,1,9,4,5,3}
Output:
6
Explanation:
The consecutive numbers here
are 1, 2, 3, 4, 5, 6. These 6 
numbers form the longest consecutive
subsquence.
*/

//Approach-I: use nested loops

//Approach-II: use sorted array

class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      
      sort(arr,arr+N);
      int lcs =1,ans=1;
      
    //   if(N>2 && arr[0]+1 == arr[1]) cnt++;
      
      for(int i=1;i<N;i++){
          //edge case
           if(arr[i-1]==arr[i]){
                continue;
            }
            if(arr[i-1]==arr[i]-1){
                lcs++;
            }else{
                lcs=1;
            }
            if(lcs>ans){
                ans=lcs;
            }
        }
      
      return ans;
    }
};