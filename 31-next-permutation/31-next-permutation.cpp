class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int i, j, n = nums.size();
        for(i = n - 2; i >= 0; i--) {
            
            if(nums[i] < nums[i+1]) {
                break;
            }
        }
        
        if(i != -1) { 
            for(j = n-1; j >= 0; j--) {

                if(nums[j] > nums[i]) {
                    break;
                }
            }
            swap(nums[i], nums[j]);
        } 
        i++, n--;
        while(i < n) {
            
            swap(nums[i], nums[n]);
            i++, n--;
        }
    }
};