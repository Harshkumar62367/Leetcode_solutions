class Solution {
public:
    int fib(int n) {
        int f0=0,f1=1;
        if(n==0)
        {
            return 0;
        }
        if(n==1)
        {
            return 1;
        }
        int fn;
        for(int i=2;i<=n;i++)
        {
            fn=f1+f0;
            f0=f1;
            f1=fn;
        }
        return fn; 
    }
};