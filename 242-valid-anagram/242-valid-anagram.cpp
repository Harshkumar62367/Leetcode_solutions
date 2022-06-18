class Solution {
public:
    bool isAnagram(string s, string t) {
        int a[123]={0},b[123]={0};
        for(int i=0;i<s.size();i++)
        {
            int x=s[i];
            a[x]++;
        }
        for(int i=0;i<t.size();i++)
        {
            int y=t[i];
            b[y]++;
        }
        for(int i=96;i<123;i++)
        {
            if(a[i]!=b[i])
            {
                return false;
            }
        }
        return true;
    }
};