class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int gap = ceil((float)(n+m)/2);
        
        for(int i = 0; i < n; i++) {
            
            nums1[i+m] = nums2[i];
        }
        
        bool gapIsOne = false;
        while(gap > 0) {
            
            int j = gap;
            for(int i = 0; i < n+m; i++) {
                
                if(j >= n+m) break;
                if(nums1[i] > nums1[j])
                    swap(nums1[i], nums1[j]);
        
                j++;
                
            }
            
            gap = ceil((float)gap/2);
            if(gapIsOne) break;
            
            if(gap == 1) gapIsOne = true;
            
        }
    }
};