class Solution {
public:
    
    void recComb(vector<int> &cand, int i, int t, int sum, vector<int> comb, vector<vector<int>> &allcomb) {
	
        if(sum > t ||  i == cand.size()) {
            return;
        }

        if(sum == t) {

            allcomb.push_back(comb);
            return;
        }

        sum += cand[i];
        comb.push_back(cand[i]);
        recComb(cand, i, t, sum, comb, allcomb);
        sum -= cand[i];
        comb.pop_back();
        recComb(cand, i+1, t, sum, comb, allcomb);
    }

    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target)     {
        
        int n = candidates.size();
        vector<vector<int>> allcomb;
        vector<int> comb;

        recComb(candidates, 0, target, 0, comb, allcomb); 
        return allcomb;
    }
};