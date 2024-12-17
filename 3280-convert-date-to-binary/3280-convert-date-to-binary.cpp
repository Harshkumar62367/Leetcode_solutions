class Solution {
public:
    string convertDateToBinary(string date) {
        string year1 = date.substr(0, 4);
        int year=stoi(year1);
        string month1 = date.substr(5, 2);
        int month=stoi(month1);
        string day1 = date.substr(8, 2);
        int day=stoi(day1);
        //cout<<year<<" "<<month<<" "<<day<<"\n";
        string res="";
        string res_year="",res_month="",res_day=""; 
        while(year){
            if(year&1){
                res_year+='1';
            }else{
                res_year+='0';
            }
            year>>=1;
        }
        reverse(res_year.begin(), res_year.end());
        res+=res_year;
        res+='-';
        while(month){
            if(month&1){
                res_month+='1';
            }else{
                res_month+='0';
            }
            month>>=1;
        }
        reverse(res_month.begin(), res_month.end());
        res+=res_month;
        res+='-';
        while(day){
            if(day&1){
                res_day+='1';
            }else{
                res_day+='0';
            }
            day>>=1;
        }
        reverse(res_day.begin(), res_day.end());
        res+=res_day;
        return res;
        
    }
};