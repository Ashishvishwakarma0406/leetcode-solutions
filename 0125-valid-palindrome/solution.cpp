class Solution {
public:
    bool isPalindrome(string s) {
        string cleanedString = "";
        for (int i = 0; i < s.size(); i++) {
            if (isalnum(s[i])) {
                cleanedString += tolower(s[i]);
            }
        }
        int left = 0;
        int right = cleanedString.size() - 1;

        while (left < right) {
            if (cleanedString[left] != cleanedString[right]) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
};
