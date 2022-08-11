class Solution {
public:
    int minPartitions(string n)
    {
        int nLen = n.size(), maxNum = 1;
        
        for (char c : n)
            maxNum = max(maxNum, c-48);
        
        return maxNum;
    }
};