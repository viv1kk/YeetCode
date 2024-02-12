class Solution {
public:
    int dp[70][70][70] = {-1};
    
    int f(vector<vector<int>>&g, int r, int c1, int c2){
        if(r == g.size()) return 0;
        if(max(c1, c2) == g[r].size() || min(c1, c2) < 0) return INT_MIN;
        if(dp[r][c1][c2] != -1) return dp[r][c1][c2];
        
        int ans = 0;
        for(int x : {-1, 0, 1}){
            for(int y : {-1, 0, 1}){
                ans = max(ans, f(g, r+1, c1+x, c2+y));
            }
        }
        ans += (c1 == c2)?(g[r][c1]):g[r][c1]+g[r][c2];
        return dp[r][c1][c2] = ans;
    }
    
    int cherryPickup(vector<vector<int>>& grid) {
        memset(dp,-1,sizeof dp);
        return f(grid, 0, 0, grid[0].size()-1);
    }
};