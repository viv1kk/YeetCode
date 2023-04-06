class Solution {
public:
    bool f(vector<vector<int>>&grid, int i, int j, int &m, int &n)
    {
        if(i >= m || j >= n || i < 0 || j < 0) return false;
        if(grid[i][j] == 1)return true;
        
        int temp = grid[i][j];
        grid[i][j] = 1;
        bool x =  f(grid, i+1, j, m, n) & f(grid, i-1, j, m, n) & f(grid, i, j+1, m, n) & f(grid, i, j-1, m, n);
        if(!x)grid[i][j] = temp;
        return x;
    }
    
    int closedIsland(vector<vector<int>>& grid) {
        int ans = 0;
        int m = grid.size();
        int n = grid[0].size();
        
        for(int i = 1; i < m-1; i++){
            for(int j = 1; j < n-1; j++){
                if(grid[i][j] == 0)
                    if(f(grid, i, j, m, n))
                        ans++;
            }
        }
        return ans;
    }
};