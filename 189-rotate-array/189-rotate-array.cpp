class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        vector<int> ans;
        
        if (size < k)
            k = k%size;
        
        for (int i = size-k; i < size; ++i)
            ans.push_back(nums[i]);
        
        for (int i = 0; i < size-k; ++i)
            ans.push_back(nums[i]);
        
        nums = ans;
    }
};