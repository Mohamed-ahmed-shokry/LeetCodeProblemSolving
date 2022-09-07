class Solution {
public:
    bool isValid(string s)
    {
        stack<char> valid;
        
        for (char c:s)
        {
            if ( c == '(' || c == '{' || c == '[')
            {
                valid.push(c);
            }
            else
            {
                if(valid.empty() || !((c == ')' && valid.top() == '(')|| (c == '}' && valid.top() == '{') || (c == ']' && valid.top() == '[')) )
                    return false;
                
                valid.pop();
            }
        }
        if(valid.empty())
            return true;
        else
            return false;
    }
};