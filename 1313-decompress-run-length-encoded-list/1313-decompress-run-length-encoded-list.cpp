class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> vect;
        for(int i=0;i<nums.size();i=i+2)
        {
            while(nums[i]--)
            {
                vect.push_back(nums[i+1]);
            }
        }
        return vect;
    }
};