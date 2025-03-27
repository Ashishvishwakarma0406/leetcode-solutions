class Solution {
public:
    int secondHighest(string s) {
        int n = s.size();
        vector<int> v;
        for(int e:s){
            if(isdigit(e)){
                v.push_back(e-'0');
            }
        }
        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()),v.end());
        n = v.size()-1;
        for(int i =n;i>0;i--){
            if(v[i-1]<v[i]){
                return v[i-1];
            }
            continue;
        }

        return -1;
    }
};
