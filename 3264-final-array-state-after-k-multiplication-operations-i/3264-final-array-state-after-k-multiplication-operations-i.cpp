class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while(k>0){
            int low=nums[0], pos=0;
            for(int i=1;i<nums.size();i++){
                if(nums[i]<low){
                    pos=i;
                    low=nums[i];
                }
            }
            nums[pos]*=multiplier;
            k--;
        }
        return nums;
    }
};