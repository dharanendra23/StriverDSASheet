class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int> > tri(numRows);
        for(int i = 0; i < numRows; i++) {
            
            if(i == 0) {
                
                tri[i].push_back(1);
            } else if(i == 1) {
                
                tri[i].push_back(1);
                tri[i].push_back(1);
            } else {
               
                tri[i].push_back(1);
                for(int j = 0; j < i-1; j++) {
                    
                    tri[i].push_back(tri[i-1][j]+tri[i-1][j+1]);
                }
                tri[i].push_back(1);
            }
        }
        
        return tri;
    }
};