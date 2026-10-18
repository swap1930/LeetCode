class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> lastval;
        
        for(int i = 0 ; i<nums.size();i++){
            int current = nums[i];

            if(lastval.count(current)){
                if( i - lastval[current] <= k ){
                    return true; 
                }
            }
            lastval[current] = i ; 
        }
        return false ; 
    }
};