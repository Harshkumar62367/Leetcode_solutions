class Solution {
public:
    int minCost(vector<int>& houses, vector<vector<int>>& cost, int m, int n, int target) {
        vector<vector<vector<int>>> dp(m+1,vector<vector<int>>(202,vector<int>(n+1,-2)));
        return fun(houses,dp,cost,target,0,houses[0]);
    }
    int fun(vector<int>& houses,vector<vector<vector<int>>>& dp,vector<vector<int>>& cost,int target, int i,int col)
    {
        if(i==houses.size())
        {
             if(target==0) return 0;
             return -1;
        }   
        
        if(dp[i][target+101][col]!=-2)
            return dp[i][target+101][col];
        
        int t=INT_MAX;
        if(houses[i]==0)
        {
            for(int k=1;k<=cost[0].size();k++)
            {
                houses[i]=k;// set to k
                int x;
                if(col!=k)
                    x=fun(houses,dp,cost,target-1,i+1,houses[i]);// target -1
                else
                    x=fun(houses,dp,cost,target,i+1,houses[i]);//same color as prev, target same
                
                houses[i]=0;// reset color
                   
                if(x!=-1)
                {
                    t=min(t,x+cost[i][k-1]);
                }
            }
        }
        else
        {
            if(i==0 || houses[i]!=houses[i-1])
                t=fun(houses,dp,cost,target-1,i+1,houses[i]);
            else 
                t=fun(houses,dp,cost,target,i+1,houses[i]);
        }
        if(t==INT_MAX)
            t=-1;
        
        return dp[i][target+101][col]=t;
    }
};