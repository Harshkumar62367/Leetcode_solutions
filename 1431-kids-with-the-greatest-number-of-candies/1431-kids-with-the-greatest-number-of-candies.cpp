class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxm = 0;
        vector<bool> vect;
        for(int i=0; i<candies.size(); i++)
        {
            if(candies[i]>=maxm)
            {
                maxm=candies[i];
            }
        }
        for(int i=0; i<candies.size(); i++)
        {
            if(candies[i]+extraCandies>=maxm)
            {
                vect.push_back(true);
            }
            else{
                vect.push_back(false);
            }
        }
        return vect;
        
    }
};