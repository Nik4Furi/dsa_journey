long long trappingWater(int arr[], int n){
        // code here
        
        //Store left side and right side maxi
        int *left = new int(n);
        int *right = new int(n);
        
        left[0] = arr[0];
        right[n-1] = arr[n-1];
        
        for(int i=1;i<n;i++)
            left[i] = max(arr[i],left[i-1]);
        
        for(int i=n-2;i>=0;i--)
            right[i] = max(arr[i],right[i+1]);
        
        
        //Now find the storage unit
        int ans = 0;
        
        for(int i=0;i<n;i++)
            ans += ( min(left[i],right[i]) - arr[i]);
        
        return ans;
    }