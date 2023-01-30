class Solution {
public:
    int tribonacci(int n) {
        int t0=0,t1=1,t2=1;
        if(n<2){
            return n;
        }
        if(n==2){
            return 1;
        }
        int tn;
        for(int i=3;i<=n;i++)
        {
            tn=t0+t1+t2;
            t0=t1;
            t1=t2;
            t2=tn;
        }
        return tn;
    }
};