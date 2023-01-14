class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count=0,x;
        if(ruleKey=="type"){
            x=0;
        }
        else if(ruleKey=="color")
        {
            x=1;
        }
        else{
            x=2;
        }
        for(int i=0;i<items.size();i++)
         {
            if(items[i][x]==ruleValue)
            {
                count++;
            }
        }  
        return count;
    }
};