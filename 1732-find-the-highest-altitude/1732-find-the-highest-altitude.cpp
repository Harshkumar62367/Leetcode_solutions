class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max_alt=0, alt=0;
        for(int i=0;i<gain.size();i++)
        {
            alt=alt+gain[i];
            if(alt>max_alt)
            {
                max_alt=alt;
            }
        }
        return max_alt;
    }
};