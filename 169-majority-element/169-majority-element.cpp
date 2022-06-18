class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int x=INT_MIN,maxm=0, req, count=0;
        if(nums.size()==1)
        {
            return nums[0];
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=x)
            {
                x=nums[i];
                count=1;
            }
            else{
                count++;
                if(count>maxm)
                {
                    maxm=count;
                    req=x;
                }
                
            }
        }
        return req;
    }
};