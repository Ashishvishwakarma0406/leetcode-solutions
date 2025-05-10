class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int q=nums1.size()-m;
        for(int i=0;i<nums2.size();i++){
            nums1.push_back(nums2[i]);
        }
        int p=m+n;
        int count=0;
        for(int j= 0; j<p;j++){
            if(nums1[j]==0 && count<q){
                nums1.erase(nums1.begin()+j);
                j--;
                p-=1;
                count++;
            }
        }
        sort(nums1.begin(),nums1.end());

    }
};
