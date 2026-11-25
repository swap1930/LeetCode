class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int> values; 

        for(int x : candyType){
           values.insert(x); 
        }
        int limit = candyType.size() / 2 ;
        int count = values.size(); 
      
        return min(count,limit); 
    }
};