class Solution {
public:
    string capitalizeTitle(string title)
    {
        int len = title.size();
        
        for (int i = 0; i < len; ++i)
        {
            if(title[i] == ' ')
                continue;
            
            if(i+2 < len && (i == 0 || title[i-1] == ' ') && title[i+1] != ' ' && title[i+2] != ' ')
            {
                if (title[i] > 90)
                    title[i] = title[i]-32; 
            }
            else
            {
                if (title[i] <= 90)
                    title[i] = title[i]+32; 
              
            }
                
            
        }
        
        return title;
    }
};