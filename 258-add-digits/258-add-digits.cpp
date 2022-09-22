class Solution {
public:
    int addDigits(int num) 
    {
        int res = 0;
            
        while(num > 9)
        {
            res = 0;
            while(num > 0)
            {
                res += num%10;
                num /= 10;
            }
            num = res;
        }
        
        return num;
    }
};