class Solution {
public:
    int f(int n, int c, vector<int>&dp)
    {
        if(n < c) return 0;
        if(n == c) return 1;
        if(dp[c] != 0) return dp[c];
        return dp[c]=(f(n, c+1, dp)+f(n, c+2,dp));
    }
    
    int climbStairs(int n) {
        vector<int>dp(n, 0);
        return f(n, 0, dp);
    }
};