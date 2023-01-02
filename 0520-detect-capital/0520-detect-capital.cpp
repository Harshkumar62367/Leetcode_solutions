class Solution {
public:
    bool detectCapitalUse(string word) {
        string s;
        s=word;
        if(word[0]==toupper(word[0]))
        {
            if(word[1]==toupper(word[1]))
            {
                for(int i=1;i<s.size();i++)
                {
                    s[i]=toupper(s[i]);
                }
                if(s==word)
                {
                    return true;
                }
            }
            else{
                for(int i=1;i<s.size();i++)
                {
                    s[i]=tolower(s[i]);
                }
                if(s==word)
                {
                    return true;
                }
            }
        }
        else{
            for(int i=0;i<s.size();i++)
            {
                s[i]=tolower(s[i]);
            }
            if(s==word)
            {
                return true;
            }
        }
        return false;


        
        
    }
};