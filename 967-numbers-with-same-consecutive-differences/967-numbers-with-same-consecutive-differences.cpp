class Solution {
public:
    vector<int> results;
    void helper(int n, int k,int l,int num){
        if(n==l){
            results.push_back(num);
            return;
        }
        int last_digit = num % 10;
        if(last_digit+k<=9){
            helper(n,k,l+1,num*10+last_digit+k);
        }
        if(k!=0 && last_digit-k>=0)
            helper(n,k,l+1,num*10+last_digit-k);
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        for(int i=1;i<=9;++i)
            helper(n,k,1,i);
        return results;
    }
};