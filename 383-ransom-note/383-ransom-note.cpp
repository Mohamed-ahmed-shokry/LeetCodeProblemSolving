class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        unordered_map<char, int> myMap;
        
        for (char c:magazine)
            ++myMap[c];
        
        for (char c:ransomNote)
        {
            if (!myMap[c])
                return false;
            else
                --myMap[c];
        }
        
        return true;
    }
};