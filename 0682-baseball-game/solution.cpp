class Solution {
public:
    int calPoints(vector<string>& operations){
        stack<int> st;
        int sum =0;
        for(auto elem: operations){
            if(elem == "+"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.push(a);
                st.push(a+b);
                sum+=a+b;
            }
            else if(elem == "D"){
                int a = st.top();
                st.push(2*a);
                sum+=2*a;

            }
            else if(elem == "C"){
                int a = st.top();
                sum-=a;
                st.pop();
            }else{
                st.push(stoi(elem));
                sum+=stoi(elem);
            }
        }
        return sum;
    }
};
