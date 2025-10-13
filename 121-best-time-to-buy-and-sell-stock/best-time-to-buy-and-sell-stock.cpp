class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minStockPrice = INT_MAX;
        int maxProfit = 0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<minStockPrice){
                minStockPrice = prices[i];
            }
            else{
                maxProfit = max(maxProfit,prices[i]-minStockPrice);
            }
        }
        return maxProfit;
    }
};