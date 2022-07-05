class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==0)
        {
            return 0;
        }
        int first = nums[0], maxm=1, count=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]-nums[i-1]==1)
            {
                count++;
                if(count>maxm)
                {
                    maxm=count;
                }
            }
            else if(nums[i]-nums[i-1]==0)
            {
                count;
            }
            else{
                count=1;
            }
        }
        return maxm;
    }
};