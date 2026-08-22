class Solution {
  public:
    int factorial(int n) {
        // code here
        if(n==0 || n==1) return 1;
        long result = 1.0;
        for(int i=1; i<=n; i++){
            result = result*i;
        }
        return result;
    }
};