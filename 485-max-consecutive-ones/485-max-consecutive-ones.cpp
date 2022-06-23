class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxm=0,count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                count = 0;
            }
            else{
                count++;
                if(count>maxm)
                {
                    maxm=count;
                }
            }
        }
        return maxm; 
    }
};