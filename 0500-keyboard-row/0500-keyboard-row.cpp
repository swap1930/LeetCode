class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        
         vector<string> result ; 
         
         int rowmap[26] = {
            2, 3, 3, 2, 1, 2, 2, 2, 1, 2, 2, 2, 3, 
            3, 1, 1, 1, 1, 2, 1, 1, 3, 1, 3, 1, 3
         }; 

         for(string word : words){
            int targetrow = rowmap[tolower(word[0]) - 'a']; 
            bool isvalid = true ; 

            for(int i = 0 ; i < word.size() ; i++){
              if(rowmap[tolower(word[i]) - 'a'] != targetrow){
                 isvalid = false ; 
                 break ; 
              }
            }

            if(isvalid){
                result.push_back(word);
            }
         }
         return result; 
    }
};