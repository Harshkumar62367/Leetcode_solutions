class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxm=candies[0];
        vector<bool> vect;
        for(int i=1;i<candies.size();i++)
        {
            if(candies[i]>maxm)
            {
                maxm=candies[i];
            }
        }
        for(int i=0;i<candies.size();i++)
        {
            int sum=extraCandies+candies[i];
            if(sum>=maxm)
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