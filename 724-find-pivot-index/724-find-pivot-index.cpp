class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
        int len = nums.size(), leftSum = 0, rightSum = 0;
        
        for(int i = 1; i < len; ++i)
            nums[i] = nums[i] + nums[i-1];
        
        for(int i = 0; i < len; ++i)
        {
            rightSum = nums[len-1] - nums[i];
            
            if(rightSum == leftSum)
                return i;
            
            leftSum = nums[i];
             
        }
        
        return -1;
    }
};