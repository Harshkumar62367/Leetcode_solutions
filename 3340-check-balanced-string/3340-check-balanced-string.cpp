class Solution {
public:
    bool isBalanced(string nums) {
        int sum1=0, sum2=0;
        for(int i=0;i<nums.size();i=i+2){
            sum1+=nums[i]-48;
        }
        for(int i=1;i<nums.size();i=i+2){
            sum2+=nums[i]-48;
        }
        cout<<sum1<<" "<<sum2;
        if(sum1==sum2){
            return true;
        }
        else{
            return false;
        }
    }
};