class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
        for(int i=0;i<c.size()-2;i++)
        {
            //cout<<i<<endl;
            if((c[i+2][1]-c[i+1][1])*(c[i+1][0]-c[i][0])!= (c[i+1][1]-c[i][1])*(c[i+2][0]-c[i+1][0]))
            {
                // cout<<(c[i+2][1]-c[i+1][1])<<"\n";
                // cout<<(c[i+1][0]-c[i][0])<<"\n";
                // cout<<(c[i+1][1]-c[i][1])<<"\n";
                // cout<<(c[i+2][0]-c[i+1][0])<<"\n";
                // cout<<i<<endl;
                // cout<<(c[i+2][1]-c[i+1][1])*(c[i+1][0]-c[i][0])<<endl;
                // cout<<(c[i+1][1]-c[i][1])*(c[i+2][0]-c[i+1][0])<<endl;
                return false;
            }
        }
        return true;
    }
};