class Solution {
public:
    
    void f(vector<vector<int>>&grid, int i, int j)
    {
        if(i < 0 || j < 0 || i == grid.size() || j == grid[0].size() || grid[i][j] == 0) return;
        grid[i][j] = 0;
        
        f(grid, i+1, j);
        f(grid, i-1, j);
        f(grid, i, j+1);
        f(grid, i, j-1);
    }
    
    
    int numEnclaves(vector<vector<int>>& grid) {
        
        int m = grid.size(), n = grid[0].size();
        
        
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if((i == 0 || j == 0 || i == m-1 || j == n-1)&& grid[i][j] == 1)
                    f(grid, i, j);
            }
        }
        int ans = 0;   
        for(int i = 1; i < m-1; i++)
        {
            for(int j = 1; j < n-1; j++)
            {
                ans += grid[i][j];
            }
        }
        return ans;
    }
};