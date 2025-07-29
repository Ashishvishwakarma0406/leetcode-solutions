class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> roman = {{'I', 1},   {'V', 5},   {'X', 10},
                                            {'L', 50},  {'C', 100}, {'D', 500},
                                            {'M', 1000}};
        int sum = 0;
        int i = 0;
        while (i < s.size()) {
            char one = s[i];
            char two = (i+1<s.size())? s[i+1] : 0;
            if(roman[one]>=roman[two]){
                sum+= roman[one];
            }else{
                sum-= roman[one];
            }
            i++;
        }

        return sum;
    }
};

