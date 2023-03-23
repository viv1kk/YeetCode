class Solution {
public:

    int ans = 0;

    void f(vector<vector<int>>&grid, int i, int j, int m, int n, int ct, int sz)
    {
        if(i < 0 || j < 0 || i >= m || j >= n) return;
        if(grid[i][j]==-2 ||grid[i][j] == -1)return;
        if(grid[i][j] == 2){
            if(ct == sz) ans++;
            return;
        }
        int temp = grid[i][j];
        grid[i][j] = -2;
        
        f(grid, i+1, j, m, n, ct+1, sz);
        f(grid, i-1, j, m, n, ct+1, sz);
        f(grid, i, j+1, m, n, ct+1, sz);
        f(grid, i, j-1, m, n, ct+1, sz);
        
        grid[i][j] = temp;
    }
    
    int uniquePathsIII(vector<vector<int>>& grid) {
        int x = 0, y = 0;
        int tot = 0;
        
        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0; j < grid[0].size(); j++)
            {
                int v = grid[i][j];
                if(v == 1)
                {
                    x = i;
                    y = j;
                }
                else if(v == -1)
                    continue;
                tot++;
            }
        }
        // cout<<x<<", "<<y<<endl;
        f(grid, x, y, grid.size(), grid[0].size(), 1, tot);
        return ans;
    }
};