class Solution {
public:
    int arrangeCoins(int n) {
        for(long int i=1;i<=n;i++)
        {
            if((i*i+i)/2>n)
            {
                return i-1;
            }
        }
        return 1;
    }
};