class Solution {
public:
    int mySqrt(int x) {
        for(long long int i=1;i<=x;i++)
        {
            if(i*i==x)
            {
                return i;
            }
            else if(i*i>x)
            {
                return i-1;
            }
        }
        return 0;
    }
};