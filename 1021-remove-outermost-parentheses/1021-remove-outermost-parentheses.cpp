class Solution {
public:
    string removeOuterParentheses(string s) {
        
        string result = ""; 
        int depth = 0 ; 

        for(int i = 0 ; i < s.length() ; i++){
           if(s[i] =='('){
            depth++; 
            if(depth > 1){
                result.push_back(s[i]);
            }
           }
           else if(s[i] == ')'){
              if(depth > 1){
                result.push_back(s[i]);
              }
            depth--; 
           }
        }
        return result ; 
    }
};