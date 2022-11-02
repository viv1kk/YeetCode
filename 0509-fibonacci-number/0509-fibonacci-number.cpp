#include <math.h>
class Solution {
public:
    int dp[31];
    int fib(int n) {
        if(n < 2)
            return n;
        dp[0] = 0;
        dp[1] = 1;
        if(dp[n] != 0)
            return dp[n];
        return dp[n] = fib(n-1)+fib(n-2);
    }
};