class Solution {
public:
    
    void combination(vector<int> &candidates, int t, int ind, vector<int> comb, vector<vector<int> > &combs) {
        
        if(t == 0) {
            
            combs.push_back(comb);
            return;
        }
        
        for(int i = ind; i < candidates.size(); i++) {
            
            if(i > ind && candidates[i] == candidates[i-1]) continue;
            
            if(candidates[i] > t) break;
            
            comb.push_back(candidates[i]);
            combination(candidates, t - candidates[i], i + 1, comb, combs);
            comb.pop_back();
        }
    }
    
    vector<vector<int> > combinationSum2(vector<int>& candidates, int target)    {
        
       sort(candidates.begin(), candidates.end());
        
        vector<int> comb;
        vector<vector<int>> combs;
        combination(candidates, target, 0, comb, combs);
        return combs;
    }
};