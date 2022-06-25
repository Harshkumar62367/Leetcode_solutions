class Solution {
public:
    bool isPalindrome(int x) {
       if (x<0)
       {
           return false;
       }
       else
       {
           int y=x;
           long int rev=0;
           while(x>0)
           {
               int m=x%10;
               rev=rev*10+m;
               x=x/10;
           }
           if(y==rev)
           {
               return true;
           }
           else{
               return false;
           }
       }
    }
};