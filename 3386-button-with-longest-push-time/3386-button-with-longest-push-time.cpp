class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) {
        int pos=events[0][0], max=events[0][1];
        for(int i=1;i<events.size();i++){
            if(events[i][1]-events[i-1][1]>max){
                max = events[i][1]-events[i-1][1];
                pos=events[i][0];
            }
            else if(events[i][1]-events[i-1][1]==max){
                if(pos>events[i][0]){
                    pos = events[i][0];
                }
            }
        }
        return pos;
    }
};