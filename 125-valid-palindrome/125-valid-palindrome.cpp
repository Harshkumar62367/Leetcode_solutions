class Solution {
public:
    bool isPalindrome(string s) {
        string p="";
        for(int i=0;i<s.size();i++)
        {
            if((s[i]>=97 && s[i]<=122) || (s[i]>=48 && s[i]<=57))
            {
                p+=s[i];
            }
            else if(s[i]>=65 && s[i]<=90)
            {
                p+=s[i]+32;
            }
        }
        cout<<p;
        string q=p;
        reverse(p.begin(),p.end());
        if(q==p)
        {
            return true;
        }
        else{
            return false;
        }
    }
};