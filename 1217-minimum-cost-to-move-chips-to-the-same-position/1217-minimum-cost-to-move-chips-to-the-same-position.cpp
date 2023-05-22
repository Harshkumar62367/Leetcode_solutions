class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int c1=0,c2=0;
        for(int i=0;i<position.size();i++)
        {
            if(position[i]%2==0)
            {
                c1++;
            }
            else{
                c2++;
            }
        }
        return min(c1,c2);
    }
};