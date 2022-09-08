class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k)
    {
        int maxNum = INT_MIN, minNum = INT_MAX;
        
        for (int num:nums)
        {
            if (num > maxNum)
                maxNum = num;
            if (num < minNum)
                minNum = num;
        }
        
        return max((maxNum - k) - (minNum + k), 0); 
    }
};