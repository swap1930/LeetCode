class Solution {
public:
    int lengthOfLastWord(string s) {
        int count= 0;
        int k = s.length()-1 ; 

        while(k>=0 && s[k] == ' '){
            k--;
        }

        for(int i = k ; i >= 0 ; i--){
            if(s[i] != ' '){
                count++;
            }
            else{
                break;
            }
        }
        return count; 
    }
};