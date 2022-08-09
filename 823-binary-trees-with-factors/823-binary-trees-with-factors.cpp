class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        constexpr int Mod = 1e9 + 7;
        const int n = arr.size();
        
        sort(arr.begin(), arr.end());
        
        vector<long> dp(n, 1);
        unordered_map<int, int> Ind;
        
        for(int i{}; i<n; i++){
            Ind[arr[i]] = i;
        }
        
        for(int i{}; i<n; i++){
            for(int j{}; j<i; j++){
                if(arr[i]%arr[j] == 0){
                    int rig = arr[i]/arr[j];
                    if(Ind.count(rig)){
                        dp[i] += dp[j] * dp[Ind[rig]];
                        dp[i] %= Mod;
                    }
                }
            }
        }
        
        return accumulate(dp.begin(), dp.end(), 0L)%Mod;
    }
};