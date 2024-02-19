class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n < 0) return false;
        int x = 0;
        while(n){
            x += (n&1);
            n = (n>>1);
        }
        return (x == 1);
    }
};