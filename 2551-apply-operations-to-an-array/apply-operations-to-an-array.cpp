class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int left  = 0 , 
        right = 1 ; 

        while(left < nums.size() && right< nums.size()){
            if(nums[left] == nums[right]){
                nums[left] *= 2 ; 
                nums[right] = 0 ; 

                left +=2; 
                right += 2; 
            }
            else{
                left ++;
                right++; 
            }
        }

        left = 0 ; 
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] !=0 ){
             swap(nums[left] , nums[i]);
             left ++; 
            }
          
        }
        return  nums; 
    }
};