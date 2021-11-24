class Solution {
    public boolean isPalindrome(int x) {
        if(x < 0) return false;
        
        String x_string = Integer.toString(x);
        int l_index = 0;
        int r_index = x_string.length() - 1;
        
        while(l_index < r_index){
            if(x_string.charAt(l_index) != x_string.charAt(r_index))
                return false;
            
            l_index++;
            r_index--;
        }
        
        return true;
    }
}
