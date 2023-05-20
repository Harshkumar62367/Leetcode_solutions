class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> vect;
        for(int i=0;i<n;i++)
        {
            vect.push_back(nums[i]);
            vect.push_back(nums[i+n]);
        }
        return vect;
    }
};

// easy
//  not revise