class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int x=0,y=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    x=i;
                    y=j;
                    break;
                }
            }
        }
        vector <int>vect;
        vect.push_back(x);
        vect.push_back(y);
        return vect;
        
    }
};