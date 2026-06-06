class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int maxval= -1;
        int n= arr.size();
        int i=0;
        while(i<n){
            if(arr[i]<maxval) break;
            maxval = max(arr[i],maxval);
            i++;
        }
        return i-1;
    }
};
