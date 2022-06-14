class Solution {
public:
    int minDistance(string word1, string word2) {
        int dp[word1.size()+1][word2.size()+1];
        
        for(int i=0;i<word1.size()+1;i++)
        {
            dp[i][word2.size()]=0;
        }
        for(int i=0;i<word2.size()+1;i++)
        {
            dp[word1.size()][i]=0;
        }
        
        
        for(int i=word1.size()-1;i>=0;i--){
            for(int j=word2.size()-1;j>=0;j--){
                if(word1[i]==word2[j])
                {
                    dp[i][j]=1+dp[i+1][j+1];
                }
                else{
                    dp[i][j]=max(dp[i+1][j],dp[i][j+1]);
                }
            }
        }
        int x=word1.size()+word2.size()-2*dp[0][0];
        return x;
    }
};