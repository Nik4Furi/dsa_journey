 //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        int n = matrix.size(),m=matrix[0].size();
        
        int startR=0,startC=0,endR=n-1,endC=m-1,totalEles = m*n,cnt=0;
        
        vector<int> ans;
        
        while(cnt < totalEles){
            //1. upper row print
            for(int i=startC; i<=endC && cnt < totalEles;i++){
                ans.push_back(matrix[startR][i]);
                cnt++;
            }
            startR++;
            
            //2. Print last column
            for(int i=startR;i<=endR && cnt < totalEles;i++){
                ans.push_back(matrix[i][endC]);
                cnt++;
            }
            endC--;
            
            //3. Print last row
            for(int i=endC;i>=startC && cnt < totalEles;i--){
                ans.push_back(matrix[endR][i]);
                cnt++;
            }
            endR--;
            
            //4. Print first column
            for(int i=endR;i>=startR && cnt < totalEles; i--){
                ans.push_back(matrix[i][startC]);
                cnt++;
            }
            startC++;
        }
        return ans;
    }