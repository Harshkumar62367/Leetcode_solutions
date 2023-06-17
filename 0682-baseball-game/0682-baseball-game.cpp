class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int sum=0;
        for(int i=0;i<operations.size();i++)
        {
            if(operations[i]=="+")
            {
                int x=st.top();
                st.pop();
                int y=st.top()+x;
                st.push(x);
                st.push(y);
            }
            else if(operations[i]=="C")
            {
                st.pop();
            }
            else if(operations[i]=="D")
            {
                st.push(2*st.top());
            }
            else{
                int num = stoi(operations[i]);
                st.push(num);
            }
        }
        while(!st.empty())
        {
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};