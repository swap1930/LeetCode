class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq  ; 

        for(int x : nums){
            freq[x]++; 
        }
        int element = 0 ; 
        int max  = 0 ; 

        for( auto x : freq){
          if(x.second > max){
             max = x.second ; 
            element =  x.first ; 
          }
        
        }
        return element ; 
    }
};