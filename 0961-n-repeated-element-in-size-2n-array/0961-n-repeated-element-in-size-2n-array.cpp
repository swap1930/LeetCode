class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        
        unordered_map<int,int> freq ; 
        int result ; 

        for(int x : nums){
            freq[x]++; 
        }

        int maxfreq = 0 ;
        int ele = 0 ;  
        for(auto x : freq){
           if(x.second > maxfreq){
             maxfreq = x.second ; 
             ele = x.first ; 
           }
           if(nums.size() == 2 * maxfreq){
              result = ele ; 
           }
        }
       return result; 
    }
};