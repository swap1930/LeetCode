class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse = {
            ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", 
            ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", 
            "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."
        };

        unordered_set<string> unique_morse ;

        for(string word : words){

            string current_morse= "";
             
            for(char c : word){
                current_morse += morse[c- 'a'];
            }
            unique_morse.insert(current_morse);
        }

        return unique_morse.size() ; 
    }
};