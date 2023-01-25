class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxm=0;
        int count=0;
        for(int i=0;i<gain.size();i++)
        {
            count+=gain[i];
            if(count>maxm)
            {
                maxm=count;
            }
        }
        return maxm;
    }
};