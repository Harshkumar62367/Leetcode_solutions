class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxm=0;
        int m = height.size();
        int i = 0;
        int j = m-1;
        while(i<j)
        {
            int z = min(height[i], height[j]);
            int maxum = (j-i)*z;
            if(maxum>maxm)
            {
                maxm=maxum;
            }
            if(height[i]<height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return maxm;
    }
};