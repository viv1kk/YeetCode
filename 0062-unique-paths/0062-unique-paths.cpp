class Solution {
public:
    int f(int m, int n, int i, int j, int st, vector<vector<vector<int>>>&dp){
        if(i == m-1 && j == n-1) return 1;
        if(i == m || j == n) return 0;
        if(dp[i][j][st] > 0) return dp[i][j][st];
        
        return dp[i][j][st]+=f(m, n, i+1, j, st+1, dp) + f(m, n,i, j+1, st+1, dp);
    }
    
    int uniquePaths(int m, int n) {
            vector<vector<vector<int>>>dp(101, vector<vector<int>>(101, vector<int>(101, 0)));

        return f(m, n, 0, 0, 0, dp);
    }
};