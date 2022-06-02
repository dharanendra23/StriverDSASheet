class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if(strs.size() == 1) {
            
            return strs[0];
        }
        
        string prefix = strs[0];
        for(int i = 0; i < strs.size(); i++) {
            
            int miniLen = min(strs[i].length(), prefix.length());
            int j;
            for(j = 0; j < miniLen; j++) {

                if(strs[i][j] != prefix[j]) {

                    prefix = prefix.substr(0, j);
                    break;
                } 
            }
            if(j == strs[i].length()) {

                prefix = strs[i];
            }
        }
        
        return prefix;
    } 
};