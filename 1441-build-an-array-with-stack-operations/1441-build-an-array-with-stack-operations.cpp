class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
       vector<string> vect;
        int k=0;
        for(int i=1;i<=n;i++)
        {
            if(target[k]==i)
            {
                vect.push_back("Push");
                if(k==target.size()-1)
                {
                    return vect;
                }
                k++;
            }
            else{
                vect.push_back("Push");
                vect.push_back("Pop");
            }
        }
        return vect;
    }
};