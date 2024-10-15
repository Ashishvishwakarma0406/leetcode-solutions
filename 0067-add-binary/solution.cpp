class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";
        int carry = 0;
        int i = a.size() - 1, j = b.size() - 1;
        while (i >= 0 || j >= 0 || carry) {
            int bitA = i >= 0 ? a[i] - '0' : 0; 
            int bitB = j >= 0 ? b[j] - '0' : 0;  

            int total = bitA + bitB + carry;  
            carry = total / 2;               
            result += (total % 2) + '0';      
            i--;  
            j--;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
