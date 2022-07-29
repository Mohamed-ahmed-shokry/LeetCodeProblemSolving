class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int maxValue = 0, temp = prices[0], size = prices.size();
        
        for (int i = 0; i < size; ++i)
        {
            temp = min(temp, prices[i]); 
            maxValue = max(maxValue, prices[i] - temp);
        }
        
        return maxValue;
    }
};