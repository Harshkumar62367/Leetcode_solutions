class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> stack;
        for(int i=0;i<s.size();i++)
        {
            if (!stack.empty() && stack.top() == s[i]) 
            {
                stack.pop();
            } 
            else 
            {
                stack.push(s[i]);
            }
        }
        string c="";
        while(!stack.empty())
        {
            c+=stack.top();
            stack.pop();
        }
        reverse(c.begin(),c.end());
        return c;
    }
};