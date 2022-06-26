class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1,mid;
        bool flag=true;
        while(l<=h)
        {
            mid=(l+h)/2;
            if(nums[mid]==target)
            {
                return mid;
                
            }
            else if(nums[mid]<target)
            {
                l=mid+1;
                flag=false;
            }
            else{
                h=mid-1;
                flag=true;
            }
            //cout<<l<<" "<<h<<" "<<mid<<endl;
        }
        if(flag == false)
        {
            return mid+1;
            
        }
        else
        {
            return mid;
        }
        }
        
    
};