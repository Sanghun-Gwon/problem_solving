// 에라토스테네스 체 이용
// 합을 소수 판별해도 될 듯함.

class Solution {
    
    public int solution(int[] nums) {
        int answer = 0;

        boolean[] arr = new boolean[3001];
        arr[0] = arr[1] = false;
        for(int i=2; i<=3000; i+=1) {
            arr[i] = true;
        }
        
        for(int i=2; i*i<=3000; i+=1) {
            for(int j=i*i; j<=3000; j+=i) {
                arr[j] = false;        
            }
        }
                
        for(int i = 0 ; i < nums.length-2; i++){
            for(int j = i+1 ; j < nums.length-1; j++){
                for(int k = j+1 ; k < nums.length; k++){
                    if(true == arr[nums[i]+nums[j]+nums[k]]) {
                        answer++;
                    }                
                }
            }
        }
        return answer;
    }
}
