class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int maxProf = 0, buy = prices[0];
        for(int i = 0; i < prices.size(); i++) {
            
            if(buy < prices[i]) {
                
                maxProf = max(maxProf, prices[i] - buy);
            } else 
                buy = prices[i];
        }
        
        return maxProf;
    }
};