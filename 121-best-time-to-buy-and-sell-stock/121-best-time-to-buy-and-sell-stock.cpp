class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int minVal = prices[0], maxPrice = 0;
        for(int i = 0; i < prices.size(); i++) {
            
            if(minVal < prices[i]) 
                maxPrice = max(maxPrice, prices[i] - minVal);
            
            minVal = min(minVal, prices[i]);
        }
        
        return maxPrice;
    }
};