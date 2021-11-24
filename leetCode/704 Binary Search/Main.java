class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l_index = 0;
        int r_index = nums.size() - 1;
        int index;
        
        while(l_index <= r_index) {
            index = (l_index + r_index)/2;
            if(nums[index] == target) {
                return index;
            } else if(nums[index] > target) {
                r_index = index - 1;
            } else {
                l_index = index + 1;  
            }
        }
        
        return -1;
    }
};
