class Solution {
public:
    string interpret(string command) {
        string s="";
        for(int i=0;i<command.size();i++)
        {
            if(command[i]=='G')
            {
                s+='G';
            }
            else if(command[i]=='(')
            {
                if(command[i+1]==')')
                {
                    s+='o';
                    i++;
                }
                else if(command[i+1]=='a')
                {
                    s+="al";
                    i=i+2;
                }
            }
        }
        return s;
    }
};