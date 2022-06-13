class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0,h=numbers.size()-1,x,y;
        for(int i=0;i<numbers.size();i++)
        {
            if(numbers[l]+numbers[h]==target)
            {
                x=l+1;
                y=h+1;
                break;
            }
            else if(numbers[l]+numbers[h]>target)
            {
                h--;
            }
            else if(numbers[l]+numbers[h]<target)
            {
                l++;
            }
            
        }
        vector <int> vect;
        vect.push_back(x);
        vect.push_back(y);
    
        return vect;
    }
};