class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        vector<int> rSum(nums.size(), 0);
        rSum[0] = nums[0];
        for(int i = 1; i < nums.size(); i++) {
            
            rSum[i] = rSum[i-1] + nums[i];
        }
        
        return rSum;
    }
};