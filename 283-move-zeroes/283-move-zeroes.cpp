class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int n=nums.size();
        int l=0,h=0;
        for(int i=0;i<n;i++)
        if(nums[h]==0)
        {
            h++;
        }
        else if(nums[h]!=0)
        {
            swap(nums[h],nums[l]);
            h++;
            l++;
        }
        
    }
};