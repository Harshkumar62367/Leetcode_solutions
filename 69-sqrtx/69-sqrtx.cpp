class Solution {
public:
    int mySqrt(int x) {
        long long int l=0,h=x,mid;
        bool c=true;
        while(l<=h)
        {
            mid=(l+h)/2;
            if(mid*mid==x)
            {
                return mid;
            }
            else if(mid*mid>x)
            {
                h=mid-1;
                c=false;
            }
            else if(mid*mid<x)
            {
                l=mid+1;
                c=true;
            }
        }
        if(c==true)
        {
            return mid;
        }
        else if(c==false)
        {
            return mid-1;
        }
        return 0;
    }
};