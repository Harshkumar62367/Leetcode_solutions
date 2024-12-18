class Solution {
public:
    int hammingDistance(int x, int y) {
        int count=0;
        while(x || y){
            if((1&x) != (1&y)){
                count++;
            }
            x>>=1;
            y>>=1;
        }
        return count;
    }
};