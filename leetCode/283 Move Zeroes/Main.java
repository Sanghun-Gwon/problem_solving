class Solution {
    public void moveZeroes(int[] nums) {
        int[] result = new int[nums.length];
        int l_idx = 0;
        int r_idx = nums.length - 1;
        
        for(int i = 0;i<nums.length;i++){
            if(nums[i]!=0){
                result[l_idx++] = nums[i];
            }else{
                result[r_idx--] = nums[i];
            }
        }
        for(int i = 0;i<nums.length;i++){
            nums[i] = result[i];
        }
    }
}
