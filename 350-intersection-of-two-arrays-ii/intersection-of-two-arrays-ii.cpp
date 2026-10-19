class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>  count;
        vector<int> result ; 
        
        for(int num : nums1){
            count[num]++; 

        }
        for(int x : nums2){
            if(count[x]>0){
              result.push_back(x);
              count[x]--; 
            }
     
           
        }
        return result ; 
    }
};