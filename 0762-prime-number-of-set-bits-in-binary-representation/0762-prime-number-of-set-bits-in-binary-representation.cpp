class Solution {   
    int convertBits(int num){
        int count=0;
        while(num){
            num=num&(num-1);
            count++;
        }
        return count;
    }
public:
    int countPrimeSetBits(int left, int right) {
        set<int> st = {2,3,5,7,11,13,17,19,23,29,31};
        int res=0;
        for(int i=left;i<=right;i++){
            int totalBits = convertBits(i);
            if(st.find(totalBits)!=st.end()){
                res++;
            }
        }
        return res;
        
    }
};