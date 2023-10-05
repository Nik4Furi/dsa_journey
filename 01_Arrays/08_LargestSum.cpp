
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        
        long long sum = 0,maxi=arr[0];
        int ind=0;
        
        while(ind < n){
            sum += arr[ind];
            maxi  = max(sum, maxi);
            
            if(sum < 0) sum = 0;
            ind++;
        }
        
        return maxi;
        
    }