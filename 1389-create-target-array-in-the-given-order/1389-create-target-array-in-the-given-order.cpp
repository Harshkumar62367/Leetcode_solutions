class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> vect;
        for(int i=0;i<index.size();i++)
        {
            if(index[i]>=i)
            {
                vect.push_back(nums[i]);
            }
            else{
                vect.insert(vect.begin()+index[i],nums[i]);
            }
        }
        return vect;
    }
};