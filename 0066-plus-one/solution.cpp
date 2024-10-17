class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i=digits.size()-1;i>-1;i--){
            int temp=digits[i];
            temp+=1;
            if(temp!=10){
                digits[i]=temp;
                return digits;
            }
            digits[i]=0;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
