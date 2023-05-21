class Solution {
public:
    vector<int> sumZero(int n) {
        int m = -1*(((n-1)*(n))/2);
        vector<int> vect;
        for(int i=1;i<n;i++)
        {
            vect.push_back(i);
        }
        vect.push_back(m);
        return vect;
    }
};