class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> topFreq;
        for (auto e : nums) {
            topFreq[e]++;
        }
        vector<vector<int>> test(nums.size() + 1);
        for (auto &[num, count] : topFreq) {
            test[count].push_back(num);
        }

        vector<int> result;
        int n = test.size() - 1;
        for (int i = n; i >= 0 && result.size() < k; i--) {
            for (auto e : test[i]) {
                result.push_back(e);
                if (result.size() == k) break;
            }
        }

        return result;
    }
};

