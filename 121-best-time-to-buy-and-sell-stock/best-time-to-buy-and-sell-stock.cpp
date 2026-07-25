class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int min=prices[0];
        int max=prices[0];
        for(int i=1;i<prices.size();i++){
          if(min>prices[i]){
            min=prices[i];
            max=prices[i];
          }
          if(max<prices[i]){
            max=prices[i];
          }
          if(profit<max-min){
            profit=max-min;
          }
        }
        return profit;
    }
};