class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> vect(n+1);
        for(int i=1;i<=n;i++){
            vect[i]=vect[i>>1] + (1&i);
            
            // For Odd: Odd number has same number of bits than its half value + 1;
            // For Even: Even number has same number of bits than its half value + 0;
        }
        return vect;
    }
};


//vector<int> vect;
    // for(int i=0;i<=n;i++){
    //     int num = i, count=0;
    //     while(num){
    //         num=num&(num-1);
    //         count++;
    //     }
    //     vect.push_back(count);
    // }
    // return vect;