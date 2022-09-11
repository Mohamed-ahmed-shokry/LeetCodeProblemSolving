class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int size = nums.size(), l = 0, r = size-1;
        vector<int> ans(size,0);
        int i = size-1;
        while(l <= r)
        {
            if (nums[l]*nums[l] <= nums[r]*nums[r])
            {
                ans[i] = (nums[r]*nums[r]);
                --r;
            }
            else
            {
                ans[i] = (nums[l]*nums[l]);
                ++l;
            }
            --i;
        }
        // reverse(ans.begin(), ans.end());
        return ans;
    }
};