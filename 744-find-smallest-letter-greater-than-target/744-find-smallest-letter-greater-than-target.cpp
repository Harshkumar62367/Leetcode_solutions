class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        long int l=0,h=letters.size()-1,mid;
        bool x=true;
        if(target>=letters[h])
        {
            return letters[0];
        }
        while(l<=h)
        {
            mid=(l+h)/2;
            if(letters[mid]>target)
            {
                h=mid-1;
                x=false;
            }
            else{
                l=mid+1;
                x=true;
            }
        }
        if(x==true)
        {
            return letters[mid+1];
        }
        else{
            return letters[mid];
        }
        
        
        
        
    }
};