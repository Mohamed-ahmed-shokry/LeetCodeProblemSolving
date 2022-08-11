class Solution {
public:
    string intToRoman(int num) {
        vector<int> in={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        int sizeIn = in.size(), count;
        vector<string> roman={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        string ans  = "";
        
        
        for(int i = 0; i < sizeIn; ++i)
        {
            count = num/in[i];
            
            while (count--)
                ans += roman[i];
            
            num %= in[i];
        }
        
        return ans;
    }
};