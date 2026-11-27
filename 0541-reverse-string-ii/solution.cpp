class Solution {
public:
    string reverseStr(string s, int k) {
        int n =s.size();
        int win =0;
        
        for(int i =n/(2*k);i>0;i--){
            reverse(s.begin()+win,s.begin()+win+k);
            win+=2*k;
        }
        if((n -(n/(2*k)) * (2*k))<k){
            reverse(s.begin()+(n/(2*k)) * (2*k), s.end());
        }else if((n -(n/(2*k)) * (2*k))<(2*k)  && (n -(n/(2*k)) * (2*k))>=k){
            reverse(s.begin()+(n/(2*k)) * (2*k), s.begin()+k+(n/(2*k)) * (2*k));
        }else{
            return s;
        }

        return s;
    }
};
