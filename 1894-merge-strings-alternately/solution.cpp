class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged="";
        int n = word1.size();
        int m = word2.size();
        if(m>n){
            for(int i =0; i<n;i++){
                merged+=word1[i];
                merged+=word2[i];
            }
            for(int j=n;j<m;j++){
                merged+=word2[j];
            }
        }else{
            for(int i =0; i<m;i++){
                merged+=word1[i];
                merged+=word2[i];
            }   
            for(int j=m;j<n;j++){
                merged+=word1[j];
            }
        }
        return merged;
    }
};
