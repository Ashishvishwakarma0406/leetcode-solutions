class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<char> v;
        int maxLen = 0;

        for (char c : s) {
            auto it = find(v.begin(), v.end(), c);
            if (it != v.end()) {
                v.erase(v.begin(), it + 1);
            }
            v.push_back(c);
            maxLen = max(maxLen, (int)v.size());
        }

        return maxLen;
    }
};

