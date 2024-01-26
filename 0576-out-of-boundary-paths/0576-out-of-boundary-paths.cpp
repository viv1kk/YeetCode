class Solution {
public:
    long long f(int m, int n, int maxMove, int startRow, int startColumn, vector<vector<vector<long long>>>&dp) {
        if(startRow < 0 || startRow == m || startColumn < 0 || startColumn == n) return 1;
        if(maxMove == 0) return 0;
        
        if(dp[startRow][startColumn][maxMove] != -1) return dp[startRow][startColumn][maxMove];
        
        return dp[startRow][startColumn][maxMove] = f(m, n, maxMove-1, startRow+1, startColumn, dp) % 1000000007+
        f(m, n, maxMove-1, startRow-1, startColumn, dp) % 1000000007+
        f(m, n, maxMove-1, startRow, startColumn-1, dp) % 1000000007+
        f(m, n, maxMove-1, startRow, startColumn+1, dp) % 1000000007;
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        vector<vector<vector<long long>>>dp(m,vector<vector<long long>>(n, vector<long long>(maxMove+1, -1)));
        return f(m, n, maxMove, startRow, startColumn, dp) % 1000000007;
    }

};