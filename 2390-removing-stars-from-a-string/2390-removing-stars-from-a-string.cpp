class Solution {
public:
    string removeStars(string s) {
        stack<char> stack;
        for(int i=0;i<s.size();i++){
            if(s[i]!='*')
            {
                stack.push(s[i]);
            }
            else if(s[i]=='*')
            {
                stack.pop();
            }
        }
        string str="";
        while (!stack.empty()){
            str+=stack.top();
            stack.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};