class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans=0;
        for (int i=0; i<colors.size(); i++){
            vector<int> x; int tes=0;
            int j= i;
            while (i<colors.size() && colors[j]==colors[i]){
                x.push_back(neededTime[i]);
                tes+= neededTime[i];
                i++;
            }
            i--;
            sort(x.begin(),x.end());
            reverse(x.begin(),x.end());
            if (tes!=0)tes-= x[0];
            ans+= tes;
        }
        return ans;
    }
};