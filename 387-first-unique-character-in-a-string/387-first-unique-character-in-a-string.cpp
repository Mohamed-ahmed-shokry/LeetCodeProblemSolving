class Solution {
public:
    int firstUniqChar(string s) {
        char ans = ' ';
        unordered_map<char, int> freq;
        
        for (char c:s)
            ++freq[c];
    
        for (char c:s)
        {
            if (freq[c] == 1)
            {
                ans = c;
                break;                
            }
        }
        
        for (int i = 0; i < s.size() && ans != ' '; ++i)
            if (s[i] == ans)
                return i;
        
        return -1;
    }
};