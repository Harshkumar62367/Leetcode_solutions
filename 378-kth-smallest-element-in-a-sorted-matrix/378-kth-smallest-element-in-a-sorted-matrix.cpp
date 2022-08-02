class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> vect;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                vect.push_back(matrix[i][j]);
            }
        }
        sort(vect.begin(),vect.end());
        return vect[k-1];
    }
};