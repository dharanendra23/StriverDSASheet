class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int minPrice = prices[0], maxProf = 0;
        for(int i = 1; i < prices.size(); i++) {
            
            if(prices[i] > minPrice) {
                
                maxProf = max(maxProf, prices[i] - minPrice);
            } 
            
            minPrice = min(minPrice, prices[i]);
        }
        
        return maxProf;
    }
};