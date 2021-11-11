class Solution {
   private static void swap(int[] arr, int idx1, int idx2) {
    int temp = arr[idx1];
    arr[idx1] = arr[idx2];
    arr[idx2] = temp;
  }

   private static void reverse(int[] arr, int start, int end) {
    while(start < end) {
      swap(arr, start, end);
      start++;
      end--;
    }
   }

   private static void rightShift(int[] arr, int n) {
      int size = arr.length;
      reverse(arr, 0, n);
      reverse(arr, n+1, size-1);
      reverse(arr, 0, size-1);
   }
    
    public void rotate(int[] nums, int k) {
        rightShift(nums, nums.length-(k%nums.length)-1);
        
    }
}
