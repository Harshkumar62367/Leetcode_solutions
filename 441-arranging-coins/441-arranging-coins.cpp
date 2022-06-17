class Solution {
public:
    int arrangeCoins(int n) {
        int i=1, count=0;
        while(true)
        {
            if(n>=i)
            {
                count++;
                n=n-i;
                i++;
            }
            else{
                break;
            }
            
        }
        return count;
    }
};