class Solution {
public:
    int minimumSum(int num) {
        vector<int> vect;
        for(int i=0;i<4;i++)
        {
            int x=num%10;
            vect.push_back(x);
            num=num/10;
        }
        sort(vect.begin(),vect.end());
        int a=vect[0]*10+vect[3];
        int b=vect[1]*10+vect[2];
        return a+b;
    }
};