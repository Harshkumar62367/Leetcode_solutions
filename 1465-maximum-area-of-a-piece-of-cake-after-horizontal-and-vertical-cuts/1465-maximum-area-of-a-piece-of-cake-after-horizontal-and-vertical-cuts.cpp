class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        long long int m=horizontalCuts[0];
        long long int n=verticalCuts[0];
        long long int x = h-horizontalCuts[horizontalCuts.size()-1];
        long long int y = w-verticalCuts[verticalCuts.size()-1];
        long long int a=max(m,x);
        long long int b=max(n,y);
        for(int i=0;i<horizontalCuts.size()-1;i++)
        {
            if(a<horizontalCuts[i+1]-horizontalCuts[i])
            {
                a=horizontalCuts[i+1]-horizontalCuts[i];
            }
        }
        for(int i=0;i<verticalCuts.size()-1;i++)
        {
            if(b<verticalCuts[i+1]-verticalCuts[i])
            {
                b=verticalCuts[i+1]-verticalCuts[i];
            }
        }
        return (b*a)%1000000007;
    }
};