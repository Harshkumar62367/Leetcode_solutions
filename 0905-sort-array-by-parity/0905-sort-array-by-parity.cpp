class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> vect;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                vect.push_back(nums[i]);
            }
        }for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2!=0)
            {
                vect.push_back(nums[i]);
            }
        }
        return vect;
    }
};

// easy
// not revise