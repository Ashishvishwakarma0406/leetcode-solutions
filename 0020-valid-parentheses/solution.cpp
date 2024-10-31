class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
    unordered_map<char, char> matchingBrackets = {
        {')', '('},
        {'}', '{'},
        {']', '['}
    };

    for (char c : s) {
        if (matchingBrackets.count(c)) {
            if (!stk.empty() && stk.top() == matchingBrackets[c]) {
                stk.pop();
            } else {
                return false;
            }
        } else {
            stk.push(c);
        }
    }
    return stk.empty();
        
    }
};
