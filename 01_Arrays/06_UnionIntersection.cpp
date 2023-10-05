
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        
        set<int> st;
        
        for(int i=0;i<n;i++)
            st.insert(a[i]);
        
        for(int i=0;i<m;i++)
            st.insert(b[i]);
        
        return st.size();
    }

    //Another method is sort both of them and used then set or other ds