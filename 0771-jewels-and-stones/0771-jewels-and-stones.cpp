class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        set<char> jewel; 

        for(char x : jewels){
            jewel.insert(x); 
        }
        int count = 0 ; 
        for(char x : stones){
            if(jewel.find(x) != jewel.end()){
             count++; 
            }
        }
        return count; 
    }
};