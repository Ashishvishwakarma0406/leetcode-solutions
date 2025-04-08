class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int count=0;
        int n = nums.size();
        vector<int> arr(n,0);
        int product=1;
        int zero=10000000;
        for(int i =0; i<n;i++){
            if(nums[i]==0){
                zero=i;
                count++;
                if(count==2){
                    return arr;
                }
                continue;
            }
            product*=nums[i];
        }
        for(int i=0;i<n;i++){
            if(zero!=10000000){
                arr[zero]=product;
                return arr;
            }
            arr[i]=product/nums[i];
        }

        return arr;

    }
};
