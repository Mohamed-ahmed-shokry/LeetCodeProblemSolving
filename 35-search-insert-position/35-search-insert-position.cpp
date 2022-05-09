class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int size = nums.size(), l = 0, r = size-1, mid, res = 0;
        
        if (nums[size-1] < target)
            return size;
        
        while (l <= r)
        {
            mid = l + (r-l)/2;
            
            if (nums[mid] == target)
                return mid;
            
            if (nums[mid] >= target)
            {
                res = mid;
                r = mid - 1;
            }
            else
                l =  mid + 1;
        }
        return res;
    }
};