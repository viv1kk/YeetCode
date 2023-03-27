class Solution {
public:
    int f(vector<vector<int>>&grid, vector<vector<int>>&dp, int i, int j)
    {
       if(i==0 && j==0) return grid[i][j];
        if(i<0 || j<0)  return INT_MAX;
        if(dp[i][j] != -1) return dp[i][j];
        return dp[i][j] = grid[i][j] + min(f(grid,dp,i-1,j),f(grid,dp,i,j-1));
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size(); 
        int n = grid[0].size();
        vector<vector<int>>dp(m+1, vector<int>(n+1, -1));
    
        return f(grid, dp, m-1, n-1);
    }
};