class Solution {
public:
    int reverse(int x) {
        if(x>0)
        {
            long int rev=0;
            int num=x;
            while(x>0)
            {
                int r=x%10;
                if(rev*10+r>INT_MAX){
                    return 0;
                }
                rev=rev*10+r;
                x=x/10;
            }
            return rev;
        }
        else{
            long int rev=0;
            int num=abs(x);
            while(num>0)
            {
                int r=num%10;
                if(rev*10+r>INT_MAX){
                    return 0;
                }
                rev=rev*10+r;
                num=num/10;
            }
            rev=-1*rev;
            return rev;
        }
        return 0;
    }
    
};