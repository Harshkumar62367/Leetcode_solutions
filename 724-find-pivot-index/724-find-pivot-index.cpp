class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0,sumLeft=0,sumRight=0,p;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        for(int i=0;i<nums.size();i++)
        {
            sumRight = sum-sumLeft-nums[i];
            if(sumRight==sumLeft){
                return i;
            }
            else{
                sumLeft+=nums[i];
            } 
        }
        return -1;
    }
};