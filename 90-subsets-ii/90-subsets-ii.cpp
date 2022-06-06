class Solution {
public:
    
    void subSets(vector<int> nums, int i, vector<int> sub, vector<vector<int>> &allSub) {
        
        if(i == nums.size()) {
            
            bool isExist = false;
            vector<int> temp = sub, temp1;
            sort(temp.begin(), temp.end());
            for(int j = 0; j < allSub.size(); j++) {
                
                temp1 = allSub[j];
                if(temp1 == temp) {
                    isExist = true;
                    break;
                }
            }
            
            if(!isExist)
                 allSub.push_back(sub);
            return;
        }
        
        
        subSets(nums, i+1, sub, allSub);
        sub.push_back(nums[i]);
        subSets(nums, i+1, sub, allSub);
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        
        vector<vector<int>> allSub;
        vector<int> sub;
        
        subSets(nums, 0, sub, allSub);
        return allSub;
    }
};