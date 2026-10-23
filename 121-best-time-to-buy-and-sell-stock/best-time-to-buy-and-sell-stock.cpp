class Solution {
public:
    int maxProfit(vector<int>& prices) {

        if(prices.size() < 2){
            return 0 ; 
        }

        int left = 0;
        int right = 1 ;

        int maxprofit = 0;
      

        while (right < prices.size()) {
          if(prices[left] < prices[right]){
            int profit = prices[right] - prices[left] ; 
            maxprofit = max(profit, maxprofit) ;
          }
          else{
            left = right ; 
          }
          right++ ;
          
        }
        return maxprofit;
    }
};