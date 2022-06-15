class Solution {
public:
    int countOdds(int low, int high) {
        if(high%2==0 && low%2==0)
        {
            int x=(high-low)/2;
            return x;
            
        }
        else
        {
            int x=(high-low)/2+1;
            return x;
            
        }
    }
};