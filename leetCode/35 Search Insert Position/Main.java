class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int sol = nums.size();
        
        for(int idx = nums.size() - 1; idx >= 0; idx--) {
            if(nums[idx] == target) return idx;
            
            if(target < nums[idx])
                sol = idx;
        }
        
        return sol;
    }
};
