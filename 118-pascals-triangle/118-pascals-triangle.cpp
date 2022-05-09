class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int> > tri(numRows);
        for(int i = 0; i < numRows; i++) {
            
            tri[i].push_back(1);
           
            for(int j = 0; j < i-1; j++) {
                    
                tri[i].push_back(tri[i-1][j]+tri[i-1][j+1]);
            }
            
            if(i) tri[i].push_back(1);
        }
        
        return tri;
    }
};