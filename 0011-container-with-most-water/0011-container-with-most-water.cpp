class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int h = height.size()-1;
        int maxm = 0;
        while (l<h)
        {
            if(maxm<min(height[l],height[h])*(h-l))
            {
                maxm=min(height[l],height[h])*(h-l);
            }
            if(height[l]<height[h])
            {
                l++;
            }
            else{
                h--;
            }
            cout<<h<<"\n";
        }
        return maxm;
    }
};