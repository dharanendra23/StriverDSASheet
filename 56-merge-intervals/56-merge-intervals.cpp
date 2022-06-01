class Solution {
public:
    
    static bool comp(vector<int> &a, vector<int> &b) {
        
        return a[0] < b[0];
    }
    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(), intervals.end(), comp);
        
        vector<vector<int>> mergedInt;
        vector<int> merged;
        merged = intervals[0];
        
        for(int i = 1; i < intervals.size(); i++) {
            
            if(merged[1] >= intervals[i][0]) {
                
                merged[1] = max(intervals[i][1], merged[1]);
 
            } else {
                
                mergedInt.push_back(merged);
                merged = intervals[i];
            }
        }
        
        mergedInt.push_back(merged);
        return mergedInt;
    }
};