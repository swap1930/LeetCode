class Solution {
public:
    string toLowerCase(string s) {
        string low = ""; 
         for(char c : s){
            low += tolower(c);
         }
         return low;
    }
};