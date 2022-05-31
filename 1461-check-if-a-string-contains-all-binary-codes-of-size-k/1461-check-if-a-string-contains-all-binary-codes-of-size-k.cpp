class Solution {
public:
    bool hasAllCodes(string s, int k) {
        
        if(s.length() < k) return false;
        
        map<string, int> binStr;
        
        for(int i = 0; i < s.length() - k + 1; ++i) {
           
            binStr[s.substr(i, k)]++;
        }
        
        if(binStr.size() == (int)pow(2, k)) {
            
            return true;
        }
        
        return false;
    }
};