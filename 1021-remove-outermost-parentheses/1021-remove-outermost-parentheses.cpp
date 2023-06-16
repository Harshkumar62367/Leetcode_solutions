class Solution {
public:
    string removeOuterParentheses(string s) {
        int count = 0;
        string output="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' && count++>0)
            {
                output+=s[i];
            }
            else if(s[i]==')' && count-->1)
            {
                output+=s[i];
            }
        }
        return output;
    }
};

