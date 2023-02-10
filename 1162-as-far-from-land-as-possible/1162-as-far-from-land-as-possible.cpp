// class Solution {
//     int n;
//     vector<vector<int>> dist;
//     void dfs(vector<vector<int>>& grid, int i, int j, int d){
//         dist[i][j] = d;
//         d++;
//         if(i+1<n && grid[i+1][j] == 0 && dist[i+1][j] > d)
//             dfs(grid, i+1, j, d);
//         if(i>0 && grid[i-1][j] == 0 && dist[i-1][j] > d)
//             dfs(grid, i-1, j, d);
//         if(j+1<n && grid[i][j+1] == 0 && dist[i][j+1] > d)
//             dfs(grid, i, j+1, d);
//         if(j>0 && grid[i][j-1] == 0 && dist[i][j-1] > d)
//             dfs(grid, i, j-1, d);
//     }
// public:
//     int maxDistance(vector<vector<int>>& grid) {
//         n = grid.size();
//         dist = vector<vector<int>>(n, vector<int>(n,1e3));
        
//         for(int i = 0; i<n; i++){
//             for(int j = 0; j<n; j++){
//                 if(grid[i][j] == 1)
//                     dfs(grid, i, j, 0);
//             }
//         }
        
//         int ans = 0;
//         for(int i = 0; i<n; i++){
//             for(int j = 0; j<n; j++){
//                 ans = max(ans, dist[i][j]);
//             }
//         }
        
//         if(ans == 0 || ans == 1e3)
//             return -1;
//         return ans;
//     }
// };
class Solution {
public:
    void f(vector<vector<int>>& grid, vector<vector<int>>&dp, int i, int j, int x, int n)
    {
        if(x >= dp[i][j]) return;
        dp[i][j] = x++;
        if(i+1 < n && grid[i+1][j] == 0 && dp[i+1][j] > x) f(grid, dp, i+1, j, x,n);
        if(i > 0 && grid[i-1][j] == 0 && dp[i-1][j] > x) f(grid, dp, i-1, j, x,n);
        if(j+1 < n && grid[i][j+1] == 0 && dp[i][j+1] > x) f(grid, dp, i, j+1, x,n);
        if(j > 0 && grid[i][j-1] == 0 && dp[i][j-1] > x) f(grid, dp, i, j-1, x,n);
    }
    int maxDistance(vector<vector<int>>& grid)
    {
        int n = grid.size();
        vector<vector<int>>dp(n, vector<int>(n, 1e3));
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(grid[i][j] == 1)
                    f(grid, dp, i, j, 0, n);
            }
        }
        
        int mx = -1;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(grid[i][j] == 0) mx = max(mx, dp[i][j]);
            }
        }
        if(mx == 1e3) mx = -1;
        return mx;
    }
};