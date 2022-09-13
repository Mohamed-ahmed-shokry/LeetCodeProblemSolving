class Solution {
public:
    int hammingDistance(int x, int y) 
    {
        int count = 0;
        int nums[31] ={1073741824, 536870912, 268435456, 134217728, 67108864, 33554432, 16777216, 8388608, 4194304, 2097152, 1048576, 524288, 262144, 131072, 65536, 32768, 16384, 8192, 4096, 2048, 1024, 512, 256, 128, 64, 32, 16, 8, 4, 2, 1};
        
        bool blX, blY;
        for (int i = 0; i < 31; ++i)
        {
            blX = false,blY = false;
            if (x >= nums[i])
            {
                x -= nums[i];
                blX = true;
            }
            if (y >= nums[i])
            {
                y -= nums[i];
                blY = true;
            }
            
            if (blX != blY)
                ++count;
        }
        // 00000000111
        // 10101001000 
        return count;
    }
};