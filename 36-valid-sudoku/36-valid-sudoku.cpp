class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board)
    {
        int n = 9;
        unordered_map<string, int> seen;
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                int element = board[i][j];
                
                if(element != '.')
                {
                     string rowFind = to_string(element) + "found at row" + to_string(i);
                
                    string colFind = to_string(element) + "found at column" + to_string(j);
                
                string boxFind = to_string(element) + "found at box" + to_string(i/3) + '-' + to_string(j/3);

                if(seen.find(rowFind) != seen.end() ||
                   seen.find(colFind) != seen.end() ||
                   seen.find(boxFind) != seen.end()){
                    return false;
                }
                
               seen[rowFind]++;
               seen[colFind]++;
               seen[boxFind]++;
            
            }
                }
                    
                
               
        }
        return true;
        
    }
};