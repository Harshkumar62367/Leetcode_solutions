class Solution {
public:
    string reverseWords(string s) {
        string str="";
        int n=s.size();
        int i=0;
        while(i<n)
        {
            while(i<n && s[i]==' '){
                i++;
            }
            if(i>=n){
                break;
            }
            cout<<i<<"\n";
            int j=i+1;
            while(s[j]!=' ' && j<n){
                j++;
            }
            cout<<j<<"\n";
            string temp = s.substr(i, j-i);
            if(str==""){
                str=temp;
            }
            else{
                str=temp+" "+str;
            }
            i=j+1;
        }
        return str;
    }
};