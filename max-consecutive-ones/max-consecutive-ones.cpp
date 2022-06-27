class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxm=0,count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                count++;
                if(count>maxm)
                {
                    maxm=count;
                }
            }
            else{
                count=0;
            }
        }
        return maxm;
    }
};