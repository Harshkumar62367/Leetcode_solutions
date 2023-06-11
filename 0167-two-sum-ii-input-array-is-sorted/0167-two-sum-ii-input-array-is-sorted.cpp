class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0,r=numbers.size()-1,x,y;
        while(true)
        {
            if(numbers[l]+numbers[r]==target)
            {
                x=l+1;
                y=r+1;
                break;
            }
            else if(numbers[l]+numbers[r]<target)
            {
                l++;
            }
            else if(numbers[l]+numbers[r]>target)
            {
                r--;
            }
        }
        vector<int> vect;
        vect.push_back(x);
        vect.push_back(y);
        return vect;
            
    }
};