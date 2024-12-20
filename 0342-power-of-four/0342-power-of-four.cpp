class Solution {
public:
    bool isPowerOfFour(int n) {
        long int count_1=0, count_0=0;
        if(n<=0){
            return false;
        }
        while(n){
            if(n&1){
                count_1++;
            }
            else{
                count_0++;
            }
            n>>=1;
        }
        if(count_1==1 && count_0%2==0){
            return true;
        }
        else{
            return false;
        }
    }
};