class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int>::iterator ptr;
        int consecutive = 0;
        int max_consecutive = 0;
        for (ptr = nums.begin(); ptr != nums.end(); ptr++) {
            if (*ptr) {
                consecutive += *ptr;
            }
            else {
                if (max_consecutive < consecutive) {
                    max_consecutive = consecutive;
                }
                consecutive = 0;
            }
        }
        if (max_consecutive < consecutive) {
            max_consecutive = consecutive;
        }
        return max_consecutive;
    }
};
