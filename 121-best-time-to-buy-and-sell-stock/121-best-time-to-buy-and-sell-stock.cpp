class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==1)
        {
            return 0;
        }
        int l=0,maxm=0;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]<prices[l])
            {
                l=i;
            }
            if(prices[i]-prices[l]>maxm)
            {
                maxm=prices[i]-prices[l];
            }
            
        }
        return maxm;
    }
};