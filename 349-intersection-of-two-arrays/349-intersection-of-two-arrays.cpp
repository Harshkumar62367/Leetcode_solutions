class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int a[1001]={0}, b[1001]={0};
        vector<int> vect;
        for(int i=0;i<nums1.size();i++)
        {
            a[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            b[nums2[i]]++;
        }
        for(int i=0;i<1001;i++)
        {
            if(b[i]>0 && a[i]>0)
            {
                vect.push_back(i);
            }
        }
        return vect;
    }
};