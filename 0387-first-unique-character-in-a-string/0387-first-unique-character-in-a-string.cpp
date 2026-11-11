class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> val ; 

        for(char c : s){
            val[c]++ ; 
        }

        for(int i = 0 ;  i < s.length() ; i++){
            if(val[s[i]] == 1){
                return i ; 
            }
        }
        return -1 ; 
    }
};