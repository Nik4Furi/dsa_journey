 bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size(),cols=matrix[0].size();
        int end = rows*cols-1,temp=0;

        while(temp <= end){
            //find mid
            int mid = temp + (end-temp)/2;

            int ele = matrix[mid/cols][mid%cols];

            if(ele == target) return true;
            else if(ele > target) end =mid-1;
            else temp = mid+1;
        }

        return false;

      //Row wise sorted matrix


    }