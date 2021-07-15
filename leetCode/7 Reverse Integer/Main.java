class Solution {
    public int reverse(int num) {
        int sign = (num>=0)?1:-1;
        num *= sign;
        
        String s_num = Integer.toString(num);
        StringBuffer sb_num = new StringBuffer(s_num); 
        
        try{
             int reverse_num = sign*Integer.parseInt(sb_num.reverse().toString());
             return reverse_num;
        }catch(NumberFormatException ex){
            return 0;
        }
        
    }
}
