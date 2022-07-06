class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxm=INT_MIN,sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(nums[i]>sum)
            {
                sum=nums[i];
            }
            if(sum>maxm)
            {
                maxm=sum;
            }
            
        }
        return maxm;
    }
};

// Kadane's algorithm