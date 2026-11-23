class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        map<int,int> value ; 
        int n = score.size(); 

        for(int i = 0 ; i < n ; i++){
            value[score[i]] = i ; 
        }

        vector<string> ans(n); 
        int rank = 1 ; 

        for(auto it = value.rbegin() ; it != value.rend() ; it++){
            int idx = it->second; 

            if(rank == 1){
                ans[idx] = "Gold Medal";
            }
            else if(rank == 2){
                 ans[idx] = "Silver Medal";
            }
            else if(rank == 3){
                 ans[idx] = "Bronze Medal";
            }
            else{
                ans[idx] = to_string(rank); 
            }
            rank++; 
        }

      return ans ; 
    }
};