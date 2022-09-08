class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k)
    {
        int maxNum = INT_MIN, minNum = INT_MAX;
        
        for (int num:nums)
        {
            maxNum = max(num, maxNum);
            minNum = min(num, minNum);
        }
        
        return max((maxNum - k) - (minNum + k), 0); 
    }
};