class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit =0;
        int min_index=0;
    for(int i=0;i<prices.size();i++){
        if(prices[i]<prices[min_index]) min_index=i;
        profit=max(profit,prices[i]-prices[min_index]);
    }
        
        return profit;
    }
};