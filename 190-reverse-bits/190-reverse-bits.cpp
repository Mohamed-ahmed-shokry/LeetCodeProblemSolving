class Solution {
public:
    uint32_t reverseBits(uint32_t n) 
    {
        const uint32_t len = 32; 
        uint32_t ans = 0;
        uint32_t bitValue[32] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512,1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288,1048576, 2097152, 4194304, 8388608, 16777216, 33554432, 67108864, 134217728, 268435456, 536870912, 1073741824, 2147483648};
        
        int i = len-1, j = 0;
        while(n > 0)
        {
            if (n >= bitValue[i])
            {
                ans += bitValue[j];
                n -= bitValue[i];
            }
            
            --i;
            ++j;
        }
        
        
        return ans;
    }
};