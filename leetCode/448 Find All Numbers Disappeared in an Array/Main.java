class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        Boolean[] nums_yn = new Boolean[nums.length + 1];
        Arrays.fill(nums_yn, Boolean.FALSE);
        
        for(int i = 0; i < nums.length; i++){
            nums_yn[nums[i]] = true;
        }
        
        List<Integer> solution =new ArrayList<Integer>();
         for(int i = 1; i < nums_yn.length; i++){
            if(nums_yn[i] == false){
                solution.add(i);
            }
        }
        
        return solution;
    }
}
