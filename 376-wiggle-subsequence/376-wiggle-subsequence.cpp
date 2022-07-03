class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        if(nums.size()==1)
        {
            return 1;
        }
        int prev=nums[1]-nums[0],diff,count=2;
        if(prev==0)
        {
            count=1;
        }
        for(int i=1;i<nums.size()-1;i++)
        {
            diff=nums[i+1]-nums[i];
            if((prev>=0 && diff<0) || (prev<=0 && diff>0))
            {
                prev=diff;
                count++;
            }
        }
        return count;
    }
};