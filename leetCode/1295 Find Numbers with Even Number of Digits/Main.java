class Solution {
public:
    vector<int>::iterator ptr;
    

    int findNumbers(vector<int>& nums) {
        int cnt = 0;
        for (ptr = nums.begin(); ptr != nums.end(); ptr++) {
            if (!(to_string(*ptr).length() % 2)) cnt++;
        }
        return cnt;
    }
};
