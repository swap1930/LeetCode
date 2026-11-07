class Solution {
public:
    bool isPalindrome(string s) {
       string cleaned = "";

       for(char c : s){
         if(isalnum(c)){
            cleaned += tolower(c); 
         }
       }

        string srev(cleaned.rbegin(), cleaned.rend());

        for(int i = 0 ; i < srev.length() ; i++){
           if(cleaned[i] != srev[i]){
              return false ; 
           }
        }
        return true ; 
    }
};