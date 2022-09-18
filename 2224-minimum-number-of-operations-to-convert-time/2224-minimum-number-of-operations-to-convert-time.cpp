class Solution {
public:
    int convertTime(string current, string correct)
    {
        string hourCurr = current.substr(0,2), hourCorr = correct.substr(0,2);
        string minuCurr = current.substr(3,2), minuCorr = correct.substr(3,2);
        
        int hourCurrVal = stoi(hourCurr), hourCorrVal = stoi(hourCorr);
        int minuCurrVal = stoi(minuCurr), minuCorrVal = stoi(minuCorr);
        
        int res = 0, inc[] = {60, 15, 5, 1}, temp;
        
        temp = (hourCorrVal*60 + minuCorrVal) - (hourCurrVal*60 + minuCurrVal);
        for (int i = 0; i < 4; ++i)
        {
            if(inc[i] <= temp)
            {
                res += temp/inc[i];
                temp = temp%inc[i];
            }
        }
        
        return res;
    }
};