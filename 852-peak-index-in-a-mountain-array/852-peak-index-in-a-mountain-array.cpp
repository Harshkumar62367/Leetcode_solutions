class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        long int l=1,h=arr.size()-2,mid;
        while(l<=h)
        {
            mid=(l+h)/2;
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
            {
                return mid;
            }
            else if(arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1])
            {
                l=mid+1;
            }
            else if(arr[mid]<arr[mid-1] && arr[mid]>arr[mid+1])
            {
                h=mid-1;
            }
        }
        return 0; 
    }
};