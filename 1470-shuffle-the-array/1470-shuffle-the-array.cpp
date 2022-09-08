class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) 
    {
        vector<int> ans(n*2);
        
        int j = -1;
        for (int i = 0; i < n; ++i)
        {
            ans[++j] = nums[i];
            ans[++j] = nums[n+i];
        }
        
        return ans;
    }
};