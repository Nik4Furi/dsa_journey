//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        
        
        if(arr[0] == 0) return -1;
        if(n == 1) return 0;
        
        int steps =0,jumps=0,cnt=0;
        
        for(int i=0;i<n;i++){
            //find steps to move
            steps = max(steps,arr[i]+i);
            
            //Now add to on jumps
            if(i == jumps){
                cnt++;
                jumps = steps;
                
                if(steps >= n-1) return cnt;
            }
        }
        
        return -1;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends