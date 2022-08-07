class Solution {
public:
    int climbStairs(int n) {
        int ans = 0;
        
        if (n == 1 || n == 2 || n == 3)
            return n;
        
        int prev = 1;
        int curr = 2;
        for (int i = 2; i < n; ++i)
        {
            ans = curr + prev;// 3 5
            prev = curr;// 2 3
            curr = ans; // 3 5
        }
        
        return ans;
    }
};

// // n = 4
// 1 1 1 1
// 1 1 2
// 1 2 1
// 2 1 1
// 2 2

// // n = 5
// 1 1 1 1 1
// 1 1 1 2
// 1 1 2 1
// 1 2 1 1
// 2 1 1 1
// 1 2 2
// 2 1 2
// 2 2 1
