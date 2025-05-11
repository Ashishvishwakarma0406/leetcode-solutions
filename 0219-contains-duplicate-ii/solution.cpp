class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_set<int> contain;
        int i = 0, j = 0;
        while (j < n) {
            if (contain.find(nums[j]) != contain.end()) {
                return true;
            }
            contain.insert(nums[j]);
            if (j - i >= k) {
                contain.erase(nums[i]);
                i++;
            }
            j++;
        }
        return false;
    }
};

