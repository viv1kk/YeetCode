class Solution {
public:
    
    void f(vector<vector<int>>&grid, vector<vector<int>>&dp, int i, int j, int m, int n, int sum)
    {
        if(i >= m || j >= n) return;
        if(i == m-1 && j == n-1){
            dp[i][j] = min(dp[i][j], grid[i][j]+sum);
        }
        sum += grid[i][j];
        if(dp[i][j] <= sum)
            return;
        dp[i][j] = min(dp[i][j], sum);
        f(grid, dp, i+1, j, m, n, sum);
        f(grid, dp, i, j+1, m, n, sum);
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size(); 
        int n = grid[0].size();
        vector<vector<int>>dp(m, vector<int>(n, INT_MAX));
        
        f(grid, dp, 0, 0,m, n, 0);
        
        return dp[m-1][n-1];    
    }
};