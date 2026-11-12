class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {

        int colindex = 0 ; 

        if(ruleKey == "type"){
            colindex = 0 ;
        }
        else if(ruleKey == "color"){
            colindex = 1 ;
        }
        else if(ruleKey == "name"){
            colindex = 2 ;
        }
        
        int count = 0 ; 

        for(int i = 0 ; i < items.size() ; i++){
           if(items[i][colindex] == ruleValue){
            count++; 
           }
        }
        return count ; 
    }
};