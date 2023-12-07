//{ Driver Code Starts
//Initial function template for C++


/*
    Input:
    N = 6
    arr[] = 7 10 4 3 20 15
    K = 3
    L=0 R=5

    Output : 7
    Explanation :
    3rd smallest element in the given 
    array is 7.
*/

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
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
        
       for(int i=l;i<=r;i++)
        pq.push(arr[i]);
        
        
        int ind = r-l+1-k;
        
        while(ind){
            pq.pop();
            ind--;
        }
        
        return pq.top();
    }
};

//{ Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends