class Solution {
    int[] memoization = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    
     public int getCatalanNum(int n){
         if(n <= 1) return 1;
        
        int ret = memoization[n];
        if(ret != -1) return ret;
        ret = 0;
        
        for(int first = 1; first<=n; first++){
            int left = getCatalanNum(first-1);
            int right = getCatalanNum(n-first);
            ret += left * right;
        }
        return ret;
    }
    
    public int numTrees(int n) {
        
        return getCatalanNum(n);
    }
}
