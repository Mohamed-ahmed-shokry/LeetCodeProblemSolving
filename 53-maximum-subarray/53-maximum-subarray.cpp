class Solution {
public:
    int maxSubArray(vector<int>& nums)
    {
         int maxNum = nums[0], currMax = nums[0];
        
        for (int i = 1; i < nums.size(); ++i)
        {
            currMax = max(nums[i], nums[i]+currMax);
            maxNum = max(currMax, maxNum);
        }
        
        return maxNum;
    }
};