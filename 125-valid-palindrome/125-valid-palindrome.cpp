class Solution {
public:
    bool isPalindrome(string s)
    {
        int len = s.size(), i = 0, j = s.size()-1;
        
        while(i < j)
        {
            while(!isalnum(s[i]) && i < len)
                ++i;
            while(!isalnum(s[j]) && j > 0)
                --j;
            
            if(i >= j)
                break;
            
            if(tolower(s[i]) != tolower(s[j]))
                return false;
            
            ++i;
            --j;
        }
        
        return true;
    }
};