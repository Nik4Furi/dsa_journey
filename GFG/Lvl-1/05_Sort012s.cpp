//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

/*
    Input: 
    N = 5
    arr[]= {0 2 1 2 0}
    Output:
    0 0 1 2 2
    Explanation:
    0s 1s and 2s are segregated 
    into ascending order.
*/



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        //approach , sort function to sort
        
        int s=0,m=0,e=n-1;
        
        while(m<=e){
            if(a[m] == 0) swap(a[s++],a[m++]);
            else if(a[m] == 1) m++;
            else swap(a[e--],a[m]);
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends