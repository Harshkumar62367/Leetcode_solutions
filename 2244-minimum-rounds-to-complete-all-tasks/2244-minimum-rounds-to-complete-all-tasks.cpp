class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        int count=1;
        vector<int>cnt;

        sort(tasks.begin(),tasks.end());

        if(tasks.size()==1)
        return -1;

        for(int i=1;i<tasks.size();i++){
            if(tasks[i]==tasks[i-1])
            count++;
            else{
                cnt.push_back(count);
                count=1;
            }
        }
        cnt.push_back(count);

        count=0;

        for(int i=0;i<cnt.size();i++){
            if(cnt[i]==1)
            return -1;
            if(cnt[i]==2 or cnt[i]==3)
            count++;
            if(cnt[i]>3)
            count+=(cnt[i]+2)/3;
        }

        return count;
    }
};