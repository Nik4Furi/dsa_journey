
    int minJumps(int arr[], int n){
        // Your code here
        
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