class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        map<int, int> hashMap;
        vector<int> ans;
        
        for(int i = 0; i < nums.size(); i++) {
            
            if(hashMap.find(target - nums[i]) != hashMap.end()) {
                
                ans.push_back(hashMap[target-nums[i]]-1);
                ans.push_back(i);
                return ans;
            }
            
            if(hashMap.find(nums[i]) == hashMap.end())
                 hashMap.insert({nums[i], i+1});
            
        }
        return ans;
    }
};