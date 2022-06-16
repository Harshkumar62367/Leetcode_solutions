class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxm=0,peri;
        for(int i=0;i<nums.size()-2;i++){
            if(nums[i]+nums[i+1]>nums[i+2])
            {
                peri=nums[i]+nums[i+1]+nums[i+2];
                if(peri>maxm)
                {
                    maxm=peri;
                }
            }
        }
        return maxm;
    }
};