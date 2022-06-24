class Solution {
public:
    bool isAnagram(string s, string t) {
        int a[123]={0},b[123]={0};
        if(s.size()!=t.size())
        {
            return false;
        }
        for(int i=0;i<s.size();i++)
        {
            int x=s[i];
            int y=t[i];
            a[x]++;
            b[y]++;
        }
        for(int i=97;i<123;i++)
        {
            if(a[i]!=b[i])
            {
                return false;
            }
        }
        return true;
    }
};