class Solution {
public:
    bool isSubsequence(string s, string t){
        bool check;
        int index=-1;
        for(int i=0; i<s.size(); i++){
            check=false;
            for(int j=0; j<t.size(); j++){
                if(s[i]==t[j] && j>index){
                    index=j;
                    check=true;
                    break;
                }
            }
            if(check==false){
                return check;
            }

        }
        return check;
    }
};
