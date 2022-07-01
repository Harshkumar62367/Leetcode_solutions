        class Solution {
        public:
         int removeElement(vector<int>& nums, int val) {
        vector<int> vect;
        int count1=0,count2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==val)
            {
                count1++;
                nums[i]=0;
            }
            else{
                vect.push_back(nums[i]);
                count2++;
                nums[i]=0;
            }
        }
        for(int i=0;i<count2;i++){
            nums[i]=vect[i];
        }
        return count2;
        
    }
};
        
