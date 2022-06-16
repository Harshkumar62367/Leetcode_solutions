class Solution {
public:
    int subtractProductAndSum(int n) {
        long long int pro=1, sum=0;
        while(n>0)
        {
            int r=n%10;
            sum+=r;
            pro*=r;
            n=n/10;
        }
        return pro-sum;
    }
};