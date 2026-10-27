class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> num ; 
        vector<int> result; 

        for(int x : nums){
            num.insert(x);
        }

        for(int i = 1 ; i <= nums.size(); i++){
            auto it = num.find(i);
            if(it == num.end()){
                result.push_back(i); 
            }
           
        }
        return result ; 
    }
};