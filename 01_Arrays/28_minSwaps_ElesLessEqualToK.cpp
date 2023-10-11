
    int minSwap(int arr[], int n, int k) {
        // Complet the function
          int miniswap=INT_MAX;
        int window=0;
        for(int i=0;i<n;i++){
            if(arr[i]<=k) window++;
        }
        int i=0;
        int j=0;
        int count_fav=0;
        while(j<window){
            if(arr[j]<=k) count_fav++;
            j++;
        }
        miniswap=min(miniswap,window-count_fav);
        while(j<n){
            // if(arr[j-window]>k && arr[j]>k){
                
            // }
            if(arr[j-window]<=k && arr[j]>k){
                count_fav--;
                // miniswap=min(miniswap,window-count_fav);
                
            }
            else if(arr[j-window]>k && arr[j]<=k){
                count_fav++;
                miniswap=min(miniswap,window-count_fav);
            }
            else if(arr[j-window]<=k && arr[j]<=k){
              
            }
            j++;
        }
        return miniswap;
        
    }