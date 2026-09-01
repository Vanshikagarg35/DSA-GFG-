class Solution {
  public:
    int getXor(int n) {
        int mod = n % 4;
        if (mod == 0) return n;
        if (mod == 1) return 1;
        if (mod == 2) return n + 1;
        return 0;
    }

    int findXOR(int l, int r) {
        return getXor(r) ^ getXor(l - 1);
    }
};