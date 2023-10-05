//User function template for C++

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        
        priority_queue<int> pq;
        
        for(int i=l;i<=r;i++){
            pq.push(arr[i]);
        }
        int a = r-l+1-k;
        // if(k==1) return pq.top();
        
        while(a!=0){
            pq.pop();
            a--;
        }
        return pq.top();
    }
};

//other method is sort the array nlogn tC