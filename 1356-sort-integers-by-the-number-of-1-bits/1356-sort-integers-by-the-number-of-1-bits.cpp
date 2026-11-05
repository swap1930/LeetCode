class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
       vector<pair<int,int>> bitpairs ; 

        for(int x : arr){
          int count = bitset<32>(x).count(); 
          bitpairs.push_back({count,x}); 
        }

        sort(bitpairs.begin(), bitpairs.end()); 

        for(int i = 0 ; i < arr.size();i++){
            arr[i] = bitpairs[i].second;
        }

        return arr; 
    }
};