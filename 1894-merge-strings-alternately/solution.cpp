class Solution {
    string word3;
    int i=0;
public:
    string mergeAlternately(string word1, string word2) {
        for(i;i<word1.length()&& i<word2.length();i++){
            word3+=word1[i];
            word3+=word2[i];
        }
        if(i<word1.length()){
            word3+=word1.substr(i);
        }
        else{
            word3+=word2.substr(i);
        }
        return word3;
        
    }
};
