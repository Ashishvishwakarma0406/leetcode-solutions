class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string, vector<string>> map;
        vector<vector<string>> v2;
        for (int i = 0; i < n; i++) {
            string s = strs[i];
            sort(s.begin(), s.end());
            map[s].push_back(strs[i]);
        }
        for (auto e : map) {
            v2.push_back(e.second);
        }
        return v2;
    }
};
