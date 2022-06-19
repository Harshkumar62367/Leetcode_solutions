class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum=0,sumLeft=0,sumRight=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        for(int i=0;i<nums.size();i++)
        {
            sumRight=sum-sumLeft-nums[i];
            if(sumLeft==sumRight)
            {
                return i;
            }
            else{
                sumLeft+=nums[i];
            }
        }
        return -1;
        
    }
};