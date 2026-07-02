class Solution {
    void restring(vector<char> &s, int start, int end){
        if(start>=end) return;
        swap(s[start],s[end]);
        return restring(s,start+1, end-1);
    }
public:
    void reverseString(vector<char>& s) {
        int start=0;
        int end= s.size()-1;
        restring(s,start,end);
        return;
    }
};
