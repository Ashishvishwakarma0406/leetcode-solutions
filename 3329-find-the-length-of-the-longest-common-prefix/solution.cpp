class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        int maxlen=0;
        unordered_set<int> v;
        for(int e: arr1){
            while(e>0 && !v.count(e)){
                v.insert(e);
                e=e/10;
            }
        }
        for(int e: arr2){
            int value = pow(10,maxlen);
            while(e>0 && e>=value){
                if(v.count(e)){
                    int len= to_string(e).size();
                    maxlen= max(maxlen,len);
                    break;
                }else{
                    e=e/10;
                }
            }
        }
        return maxlen;
    }
};
