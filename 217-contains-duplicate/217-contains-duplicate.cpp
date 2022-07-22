class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s(nums.begin(), nums.end());
        int ans = nums.size() - s.size();
        
        if (ans == 0)
            return false;
        
        return true;
    }
};