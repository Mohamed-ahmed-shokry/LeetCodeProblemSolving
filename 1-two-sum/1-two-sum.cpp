class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        int size = nums.size();
        vector<int> ans(2, 0);
        
        for (int i = 0; i < size-1; ++i)
        {
            for (int j = i+1; j < size; ++j)
            {
                if (nums[i] + nums[j] == target)
                {
                    ans[0] = i;
                    ans[1] = j;
                    goto end;
                }
            }
        }
        
        end:
        return ans;
    }
};