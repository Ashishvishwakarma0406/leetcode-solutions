class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        int n = strs.size()-1;
        int m = strs[n].size();
        string a = strs[0];
        string b = strs[n];
        string c ="";
        for(int i =0; i<m;i++){
            if(a[i]!=b[i]){
                return c;
            }
            c+=a[i];
        }
        return c;
        
    }
};
