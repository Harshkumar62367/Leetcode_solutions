class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> vect;
        int x=nums.size()/2;
        for(int i=0;i<x;i++)
        {
            vect.push_back(nums[i]);
            vect.push_back(nums[i+x]);
        }
        return vect;
    }
};