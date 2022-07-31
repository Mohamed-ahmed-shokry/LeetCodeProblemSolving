class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) 
    {
        int rowLen = mat.size(), colLen = mat[0].size();
        
        if(rowLen * colLen != r*c)
            return mat;
        
        vector<vector<int>> ans(r, vector<int>(c,0));
        
        for (int i = 0; i < r*c;  ++i)
        {
            ans[i/c][i%c] = mat[i/colLen][i%colLen];  
        }
        

        return ans;
    }
};