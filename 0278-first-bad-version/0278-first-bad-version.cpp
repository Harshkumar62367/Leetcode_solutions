// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l=1,r=n;
        if(isBadVersion(1)==true)
        {
            return 1;
        }
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(isBadVersion(mid)==true && isBadVersion(mid-1)==false)
            {
                return mid;
            }
            if(isBadVersion(mid)==true && isBadVersion(mid-1)==true)
            {
                r=mid-1;
            }
            if(isBadVersion(mid)==false && isBadVersion(mid-1)==false)
            {
                l=mid+1;
            }
        }
        return 0;
    }
};