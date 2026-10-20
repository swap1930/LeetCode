class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size(); 
        int expeceted_sum = n * (n+1) / 2 ; 
        int actual_sum = accumulate(nums.begin() , nums.end() , 0 );
        return  expeceted_sum - actual_sum ; 
    }
};