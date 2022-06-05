class Solution {
public:
    
    void allSubset(vector<int> &nums, int i, vector<int> sub, vector<vector<int>> &allsub) {
	
        if(i == nums.size()) {

            allsub.push_back(sub);
            return;
        }

        allSubset(nums, i+1, sub, allsub);
        sub.push_back(nums[i]);
        allSubset(nums, i+1, sub, allsub);
    }

    
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<int> sub;
        vector<vector<int>> allsub;
        allSubset(nums, 0, sub, allsub);

        return allsub; 
    }
};