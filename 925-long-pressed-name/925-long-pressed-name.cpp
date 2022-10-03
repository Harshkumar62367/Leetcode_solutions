class Solution {
public:
    bool isLongPressedName(string name, string typed) {
       int l=0,h=0;
        if(name.size()>typed.size())
        {
            return false;
        }
        for(int i=0;i<typed.size();i++)
        {
            if(name[l]==typed[h])
            {
                l++;
                h++;
            }
            else if(l>0 && typed[h]==name[l-1])
            {
                h++;
            }
            else{
                return false;
            }
        }
        if(l<name.length())
        {
            return false;
        }
        else{
            return true;
        }
        
    }
};