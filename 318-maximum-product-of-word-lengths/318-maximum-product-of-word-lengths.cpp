class Solution {
public:
    int maxProduct(vector<string>& words) {
        
        int maxProd = 0;
            
        vector<vector<int> > freq(words.size(), vector<int>(26, 0));
        
        for(int i = 0; i < words.size(); ++i) {
            
            for(int j = 0; j < words[i].length(); ++j) {
                
                freq[i][words[i][j] - 'a']++;
            }
        } 
        
        for(int i = 0; i < words.size(); ++i) {
            
            for(int j = i+1; j < words.size(); ++j) {
                
                bool flag = false;
                for(int k = 0; k < 26; k++) {
                     
                     if(freq[i][k] >= 1 && freq[j][k] >= 1) {
                         
                         flag = true;
                         break;
                     }
                }
                
                if(!flag) {
                    
                    int prod = words[i].length() * words[j].length();
                    maxProd = max(maxProd, prod);
                } 
            }
        }
        
        return maxProd;
    }
};