class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> nums{start};
        int xor_res {start};
        for(int i = 1 ; i<n;i++){
            nums.push_back(start + 2 * i);
            xor_res = xor_res^nums[i];
        }
        
    return xor_res;
    }
};
