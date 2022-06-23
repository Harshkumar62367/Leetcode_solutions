class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int total=0;
        for(int i=0;i<operations.size();i++)
        {
            if(operations[i][0]=='-')
            {
                total--;
            }
            else if(operations[i][0]=='+')
            {
                total++;
            }
            else if(operations[i][0]=='X')
            {
                if(operations[i][1]=='+')
                {
                    total++;
                }
                else if(operations[i][1]=='-')
                {
                    total--;
                }
            }
        }
        return total;
    }
};