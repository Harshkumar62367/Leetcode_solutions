class Solution {   //Three methods
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while(n){
            count+=(n&1);
            n>>=1;
        }
        return count;
    }
};


// int count = 0;     Method - 1
//     while(n){
//         n=n&(n-1);
//         count++;
//     }
//     return count;