class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int> > mergedIntervals;
        sort(intervals.begin(), intervals.end());
    
        vector<int> interval = intervals[0];
        for(int i = 0; i  < intervals.size(); i++) {
            
            if(interval[1] >= intervals[i][0]) {
                
                interval[1] = max(interval[1], intervals[i][1]); 
            } else {
                
                mergedIntervals.push_back(interval);
                interval = intervals[i];
            }
        } 
        mergedIntervals.push_back(interval);
        
        return mergedIntervals;
    }
};