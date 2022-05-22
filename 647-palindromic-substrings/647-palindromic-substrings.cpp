class Solution {
public:
    bool checkPalindrome(string s) {
        int i = 0, j = s.length()-1;
        while(i < j) {
            
            if(s[i] != s[j]) return false;
            i++, j--;
        }
        
        return true;
    }
    
    int countSubstrings(string s) {
        
        int cnt = 0;
        for(int i = 1; i <= s.length(); i++) {
            
            for(int j = 0; j < s.length(); j++) {
                
                if(j + i  <= s.length()) {
                  cnt += checkPalindrome(s.substr(j, i));
                // cout << s.substr(j, i) << " ";
                }
            }
        }    
        
        return cnt;
    }
};