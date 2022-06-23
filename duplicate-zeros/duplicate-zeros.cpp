class Solution {
public:
    void duplicateZeros(vector<int>& nums) {
        vector<int> vect;
        int h=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[h]!=0)
            {
                vect.push_back(nums[h]);
                h++;
            }
            else
            {
                vect.push_back(0);
                vect.push_back(0);
                h++;
                i++;
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=vect[i];
        }
    }
};