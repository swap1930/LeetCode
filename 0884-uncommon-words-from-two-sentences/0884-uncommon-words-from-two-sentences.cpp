class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> freq ; 
        vector<string> result ; 
        stringstream ss(s1); 
        stringstream ss2(s2); 
        string word ; 

        while(ss >> word){
            freq[word]++ ;
        }

        while(ss2 >> word){
           freq[word]++ ;
        }
     
        for(auto pair : freq){
            if(pair.second == 1){
                result.push_back(pair.first); 
            }
        }
    return result;  
    }
};