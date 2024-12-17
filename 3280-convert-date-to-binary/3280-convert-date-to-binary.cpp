class Solution {
    
    string convert(int num){
        //cout<<num<<"\n";
            string s;
            while(num){
                s+=to_string(num%2);
                num>>=1;
            }
            reverse(s.begin(), s.end());
        //cout<<s<<"\n";
            return s;
        }
    
public:
    string convertDateToBinary(string date) {
        string res="";
        string temp="";
        for(auto it: date){
            if(it=='-'){
                //cout<<temp<<"\n";
                if(!res.empty()) res+='-';
                res+=convert(stoi(temp));
                temp="";
            }else{
                temp+=it;
            }
            //cout<<it<< "  ";
        }
        res+='-';
        res+=convert(stoi(temp));
        return res;
        
    }
};