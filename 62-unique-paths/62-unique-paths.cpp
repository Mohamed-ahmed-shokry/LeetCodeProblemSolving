class Solution {
    unordered_map<string, int> myMap;
public:
    int uniquePaths(int m, int n)
    {
        string key = to_string(m) + "," + to_string(n);
        if(myMap[key]) return myMap[key];
        if (m == 1 || n == 1) return 1;
        if(m == 0 || n == 0) return 0;
        
        myMap[key] = uniquePaths(m-1, n) + uniquePaths(m,n-1);
        return myMap[key];
    }
};