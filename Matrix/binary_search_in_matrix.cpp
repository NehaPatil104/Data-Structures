class Solution {
public:

    bool binarySearch(vector<vector<int>>& matrix, int target, int row, int n){
        
        int s = 0, e = n;
        int mid = (s + e)/2;

        while(s <= e){

            if(matrix[row][mid] == target)
                return true;
            if(matrix[row][mid] > target)
                e = mid - 1;
            if(matrix[row][mid] < target)
                s = mid + 1;
            
            mid = (s + e)/2;
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int n = matrix[0].size();
        int m = matrix.size();
        int s = 0, e = m - 1;
        int mid = (s+e)/2;

        while(s <= e){

            // Element is the leftmost element of the mid row
            if(matrix[mid][0] == target)
                return true;

            // Element is the rightmost element of the mid row
            if(matrix[mid][n-1] == target)
                return true;

            // Element is in this row
            if(matrix[mid][0] < target && matrix[mid][n-1] > target)
                return binarySearch(matrix, target, mid, n-1);

            // Element is in upper row
            if(matrix[mid][0] > target)
                e = mid - 1;
                
            // Element is in lower row
            if(matrix[mid][n-1] < target)
                s = mid + 1;

            mid = (s+e)/2;
        }
        return false;
    }
};