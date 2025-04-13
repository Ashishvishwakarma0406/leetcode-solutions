class Solution {
public:
    bool isLetterOrDigit(char letter){
        if(letter >= 'a' && letter <= 'z') return true;
        if(letter >= 'A' && letter <= 'Z') return true;
        if(letter >= '0' && letter <= '9') return true;
        return false;
        
    }

    char toLowerCase(char letter) {
        if (letter >= 'A' && letter <= 'Z') {
            int distance = letter - 'A';
            char lowercase = 'a' + distance;
            return lowercase;
        }
        // Return the original letter if it's not uppercase
        return letter;
    }

    bool isPalindrome(string s) {
        int len = s.length();
        if (len <= 1) return true;
        int start = 0, end = len - 1;

        while (start < end) {
            while (start < end && !isLetterOrDigit(s[start])) start++;
            while (start < end && !isLetterOrDigit(s[end])) end--;
            if (start < end && toLowerCase(s[start]) != toLowerCase(s[end])) return false;
            // Found a match, proceed to the next check
            start++;
            end--;
        }

        return true;
    }
};
