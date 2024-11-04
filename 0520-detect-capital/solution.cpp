class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.length();
        int capitalCount = 0;

        for (char c : word) {
            if (isupper(c)) {
                capitalCount++;
            }
        }

        if (capitalCount == n) {
            return true;
        } else if (capitalCount == 0) {
            return true;
        } else if (capitalCount == 1 && isupper(word[0])) {
            return true;
        }
        return false;
    }
};
