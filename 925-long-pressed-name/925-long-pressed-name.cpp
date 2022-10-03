class Solution {
public:
    bool isLongPressedName(string name, string typed) {
       int l=0,h=0;
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
        return (l==name.length());
        
    }
};