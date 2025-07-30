class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        unordered_map<char, char> map = {{ ')','('}, {'}','{'}, {']','['}};
        stack<char> st;
        for (int i = 0; i < n; i++) {
            char c = s[i];
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else {
                if(st.empty()){
                    return false;
                }
                char d = st.top();
                char e = map[c];
                if (d==e){
                    st.pop();
                }else{
                    return false;
                }
            }
        }
        if(!st.empty()){
            return false;
        }
        return true;
    }
};
