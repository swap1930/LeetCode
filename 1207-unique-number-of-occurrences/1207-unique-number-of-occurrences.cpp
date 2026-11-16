class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> freq ; 

        for(int x : arr){
           freq[x]++; 
        }
        
        unordered_set<int> seefreq ; 

        for(auto x : freq){
           if(seefreq.count(x.second)){
             return false ; 
           } 
           seefreq.insert(x.second);
        }
        return true; 
    }
};