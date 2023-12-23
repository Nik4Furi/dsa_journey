//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
    //------------- Function to updating the values of candies
    void solve(vector<int> &ratings,int n,vector<int> &candies,vector<int> &indexes,int ind){
       
        //base case
        if(ind >= n-1) return;
        
        //condition to update value of candy 
        if(ind-1 >=0 && ratings[ind] > ratings[ind-1] ){
            candies[ind] += candies[ind-1];
        }
        
        if(ind+1 < n && ratings[ind] > ratings[ind+1]){
            // cout << ratings[ind] << " ";
            candies[ind] += candies[ind+1];
            indexes[ind+1] = ind;
        }
        
        cout << candies[ind] << " ";
        
        solve(ratings,n,candies,indexes,ind+1);
    }
    
    
  public:
    int minCandy(int N, vector<int> &ratings) {
        // code here
        
        vector<int> candies(N,1); //save candies
        vector<int> indexes(N,-1); //save previous updated 
        
        solve(ratings,N,candies,indexes,1);
        
        //Edge cases
        //check in indexes array is updated
        for(int i=0;i<N;i++){
            if(indexes[i] == -1) continue;
            
            //o/w try to update candies
            candies[indexes[i]] = candies[i]+1;
        }
        
        //edge case for first ele
        if(N >=2 && ratings[0] > ratings[1]){
            candies[0] = candies[1]+1;
        }
        
        //edge case for last ele
        if(N >=3 && ratings[N-1] > ratings[N-2]){
            candies[N-1] = candies[N-2]+1;
        }
        
        //---------- Now calculate the no of candies
        int ans = 0;
        
        for(int i=0;i<N;i++){
            cout << i << " "<<candies[i] << endl;
            ans += candies[i];
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> ratings(N);
        for (int i = 0; i < N; i++) {
            cin >> ratings[i];
        }
        Solution obj;
        cout << obj.minCandy(N, ratings) << endl;
    }
    return 0;
}
// } Driver Code Ends