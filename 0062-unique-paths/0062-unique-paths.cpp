class Solution {
public:
    int f(int m, int n, int st, vector<vector<int>>&dp){
        if(m == 0 && n == 0) return 1;
        if(m == -1 || n == -1) return 0;
        if(dp[m][n] > 0) return dp[m][n];
        return dp[m][n]+=f(m-1, n, st+1, dp) + f(m, n-1, st+1, dp);
    }
    
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(101,  vector<int>(101, 0));
        return f(m-1, n-1, 0, dp);
    }
};