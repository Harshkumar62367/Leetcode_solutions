class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        int x=arr[n-1];
        arr[n-1] = -1;
        for(int i=n-2;i>=0;i--)
        {
            if(arr[i]<x)
            {
                arr[i]=x;
            }
            else{
                swap(arr[i],x);
            }
        }
        return arr;
    }
};