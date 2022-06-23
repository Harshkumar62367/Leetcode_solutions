class Solution {
public:
    void duplicateZeros(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                for(int j=nums.size()-2;j>=i;j--)
                {
                    nums[j+1]=nums[j];
                }
                i++;
            }
        }
    }
};