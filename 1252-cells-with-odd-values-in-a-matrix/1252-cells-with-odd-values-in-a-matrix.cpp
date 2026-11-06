class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<int> rowcount(m,0); 
        vector<int> colcount(n,0); 
        
        for(auto x : indices){
            rowcount[x[0]]++; 
            colcount[x[1]]++;    
        }
        int oddcount = 0 ; 

        for(int r = 0  ; r < m ; r++){
            for(int c = 0 ; c < n ; c++){
               if((rowcount[r] + colcount[c]) % 2 != 0){
                 oddcount++ ;
               }
            }
        }

        return oddcount; 
    }
};