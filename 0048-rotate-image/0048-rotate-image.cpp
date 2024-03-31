class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector <int>> vect(n, vector<int> (n,0));
        for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
               vect[j][n-i-1] = matrix[i][j];
           } 
        }
        for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
              matrix[i][j] = vect[i][j];
           } 
        }
    }
};