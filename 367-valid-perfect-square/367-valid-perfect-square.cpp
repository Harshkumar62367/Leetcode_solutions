class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int l=1,h=num,mid;
        while(l<=h){
            mid=(l+h)/2;
            if(mid*mid==num)
            {
                return true;
            }
            else if(mid*mid>num)
            {
                h=mid-1;
            }
            else if(mid*mid<num)
            {
                l=mid+1;
            }
        }
        return false;
        
    }
};