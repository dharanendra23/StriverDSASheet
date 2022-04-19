class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int sum = nums[0], finalSum = nums[0];
        for(int i = 1; i < nums.size(); i++) {
            
            if(sum < 0 && nums[i] > sum) sum = nums[i];
            else if(sum + nums[i] > 0)
                sum = nums[i] + sum;
            else 
                sum = nums[i];
            finalSum = max(sum, finalSum);
        }
        
        return finalSum;
    }
};