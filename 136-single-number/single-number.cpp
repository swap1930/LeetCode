class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> freq; 
         int num = 0 ; 
        for(int x : nums){
            freq[x]++;
        }

        for(int i = 0 ; i < nums.size();i++){
            if(freq[nums[i]] ==1){
                num = nums[i];
            }
        }
        return num ; 
    } 
};