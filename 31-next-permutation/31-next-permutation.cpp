class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int ind1, n = nums.size();
        for(ind1 = n-2; ind1 >= 0; ind1--) {
            
            if(nums[ind1] < nums[ind1+1]) break;
        }
        
        int ind2;
        if(ind1 >= 0) {
            
            for(ind2 = n-1; ind2 >= 0; ind2--) {

                if(nums[ind2] > nums[ind1]) break;
            }

            swap(nums[ind1], nums[ind2]);
        }
        ind1++, ind2 = n-1;
        while(ind1 < ind2)
            swap(nums[ind1++], nums[ind2--]);
    }
};