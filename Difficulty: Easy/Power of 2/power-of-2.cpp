class Solution {
  public:
    bool isPowerofTwo(int n) {
        int count = 0;
        // code here
        while(n>0){
            n = (n & (n-1));
            count++;
        }
        return (count == 1);
    }
};