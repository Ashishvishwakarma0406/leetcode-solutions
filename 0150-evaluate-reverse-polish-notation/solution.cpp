class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(string e: tokens){
            if(isdigit(e[0]) || (e.size() > 1 && isdigit(e[1]))){
                st.push(stoi(e));
            }else{
                int x = st.top();
                st.pop();
                int y = st.top(); 
                st.pop();
                if(e == "+"){
                    st.push(x+y);
                }else if( e =="-"){
                    st.push(y-x);
                }else if( e =="*"){
                    st.push(x*y);
                }else{
                    st.push(y/x);
                }
            }
        }
        return st.top();
    }
};
