class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        vector<int> hashtable(26,0);
        for (int i = 0; i < s.size(); i++) {
            hashtable[s[i] - 'a']++;
            hashtable[t[i] - 'a']--;
        }

        for (int count : hashtable) {
            if (count != 0) return false;
        }
        return true;
    }
};
