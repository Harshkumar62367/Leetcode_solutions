class Solution {
public:
    int hammingDistance(int x, int y) {
        int count=0;
        while(x || y){
            if((1&x) != (1&y)){
                count++;
            }
           // cout<<(1<<i)&x<<" "<<(1<<i)&y<<"\n";
            x>>=1;
            y>>=1;
            //i++;
        }
        return count;
    }
};