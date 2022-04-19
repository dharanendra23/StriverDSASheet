class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        
        int n = mat.size(), m = mat[0].size();
        bool marked = false;
        
        for(int i = 0; i < n; i++) {
    
            if(mat[i][0] == 0) marked = true;
            for(int j = 1; j < m; j++) {

                if(mat[i][j] == 0) {

                    // It's 1st column made 0
                    mat[i][0] = 0;

                    // It's 1st row made 0
                    mat[0][j] = 0;
                }
            }
        }

        for(int i = 1; i < n; i++) {

            for(int j = 1; j < m; j++) {

                if(mat[i][0] == 0 || mat[0][j] == 0) {

                    mat[i][j] = 0;
                }
            }
        }
        
        if(mat[0][0] == 0) {
            
            for(int i = 0; i < m; i++) {
                mat[0][i] = 0;
            }
        }

        if(marked) {
            
            for(int i = 0; i < n; i++) {

                mat[i][0] = 0;
            }
        }
       
        for(int i = 0; i < n; i++) {

            for(int j = 0; j < m; j++) {

                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
};