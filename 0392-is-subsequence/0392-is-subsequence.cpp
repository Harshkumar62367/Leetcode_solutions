class Solution {
public:
    bool isSubsequence(string s, string t) {
        int l=0,r=0,count=0;
        for(int  i=0;i<t.size();i++)
        {
            if(s[l]==t[r])
            {
                l++;
                r++;
                count++;
            }
            else if(s[l]!=t[r])
            {
                r++;
            }   
        }
        if(count==s.size())
        {
            return true;
        }
        else{
            return false;
        }
    }
};