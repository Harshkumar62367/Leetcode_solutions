class Solution {
public:
    double average(vector<int>& salary) {
        int maxm=INT_MIN,minm=INT_MAX,sum=0;
        int n = salary.size()-2;
        for(int i=0;i<salary.size();i++)
        {
            if(salary[i]>maxm)
            {
                maxm=salary[i];
            }
            if(salary[i]<minm)
            {
                minm=salary[i];
            }
            sum+=salary[i];
            
        }
        double d=(double(sum-maxm-minm))/n;
        return d;
        
    }
};