class Solution {
public:
    vector<int> indices; 
    vector<char> vowel;
    string reverseVowels(string s){

        for(int i=0;i<s.length();i++){
            if(s[i]=='a'|| s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o'|| s[i]=='O' || s[i]=='u' || s[i]=='U'){
                indices.push_back(i);
                vowel.push_back(s[i]);

            }
        }
        int l=indices.size();
        for(int i=0;i<l/2;i++){
            swap(indices[i], indices[l-i-1]);
            
        }
        for(int i=0,j=0;i<indices.size()&&j<vowel.size();i++,j++){
            s[indices[i]]=vowel[j];
        }

        return s;
        
    }
    
};
