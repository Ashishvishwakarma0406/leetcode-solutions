class Solution {
public:
    bool isPalindrome(string s) {
        string str ="";
        for(auto e: s){
            if(isalnum(e)){
                str+= tolower(e);
            }
        }
        int j=str.size()-1;
        int i=0;
        while(i<j){
            if(str[i]!=str[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
