class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int[] result = new int[2];
        
        for(int f_idx = 0; f_idx<numbers.length -1; f_idx++){
             for(int s_idx = f_idx+1; s_idx<numbers.length; s_idx++){
                if(numbers[f_idx]+numbers[s_idx] == target){
                    result[0] = f_idx + 1;
                    result[1] = s_idx + 1;
                }
            }
        }
        return result;
    }
}
