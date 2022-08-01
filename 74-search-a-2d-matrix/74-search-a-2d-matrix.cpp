class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target)
    {
        int rowSize = matrix.size(), colSize = matrix[0].size(), matrixSize = rowSize*colSize;
        int l = 0, r = matrixSize-1, mid; 
        
        while (l <= r)
        {
            mid = l + (r-l)/2;
            
            if (matrix[mid/colSize][mid%colSize] == target)
            {
                return true;
            }
            else if (matrix[mid/colSize][mid%colSize] > target)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;  
            }
        }
        
        return false;
    } 
};