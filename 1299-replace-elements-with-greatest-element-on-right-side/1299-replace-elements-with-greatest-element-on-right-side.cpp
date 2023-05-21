class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxm=arr[arr.size()-1];
        arr[arr.size()-1]=-1;
        
        for(int i=arr.size()-2;i>=0;i--)
        {
            if(arr[i]>maxm)
            {
                swap(arr[i],maxm);
            }
            else{
                arr[i]=maxm;
            }
        }
        return arr;
    }
};

// easy
//revise