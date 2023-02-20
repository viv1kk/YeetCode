class Solution {
public:
    void f(vector<vector<char>>& grid, int x, int y)
    {
        int m = grid.size(), n = grid[0].size();
        if(x < 0 || y < 0 || x >= m || y >= n) return;
        if(grid[x][y] == '2' || grid[x][y] == '0') return;
        grid[x][y] = '2';
        f(grid, x-1, y);
        f(grid, x+1, y);
        f(grid, x, y-1);
        f(grid, x, y+1);
        
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        int count = 0;
        
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(grid[i][j] == '1')
                {
                    f(grid, i, j);
                    count++;
                }
            }
        }
        return count;
    }
};