class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> vect;
        for(int i=0;i<nums.size();i++)
        {
            vect.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++)
        {
            vect.push_back(nums[i]);
        }
        return vect;
    }
};