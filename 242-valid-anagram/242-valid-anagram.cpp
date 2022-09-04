class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if(s.size() != t.size())
            return false;
        
        unordered_map<char, int> myMap;
        
        for (char c:s)
            ++myMap[c];
        
        for(char c:t)
        {
            if(myMap[c] > 0)
                --myMap[c];
            else
                return false;
        }
        
        return true;
    }
};