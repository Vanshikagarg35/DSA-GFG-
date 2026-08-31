class Solution {
public:
    int setBit(int n) {
        for (int k = 0; k < 32; k++) {
            if ((n & (1 << k)) == 0) {
                return n | (1 << k);
            }
        }
        return n;
    }
};