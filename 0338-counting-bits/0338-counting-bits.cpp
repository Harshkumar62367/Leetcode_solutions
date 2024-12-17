class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> vect;
        for(int i=0;i<=n;i++){
            int num = i, count=0;
            while(num){
                num=num&(num-1);
                count++;
            }
            vect.push_back(count);
        }
        return vect;
    }
};