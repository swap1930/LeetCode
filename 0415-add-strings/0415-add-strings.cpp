class Solution {
public:
    string addStrings(string num1, string num2) {
        int sum = 0 ; 
        int carry = 0 ; 
        int i = num1.length() - 1 ; 
        int j = num2.length() - 1 ; 
        string result = ""; 

        while(i >= 0 || j >= 0 || carry > 0){
            int digit1 = (i >= 0) ? num1[i] - '0' : 0; 
            int digit2 = (j >= 0) ? num2[j] - '0' : 0; 

            sum = digit1 + digit2 + carry ; 
            result.push_back((sum % 10) + '0'); 
            carry = sum / 10 ; 
            
            i--; 
            j--; 
        }
        reverse(result.begin() , result.end());
        return result; 
    }
};