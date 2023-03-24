class Solution {
public:
    
    
    void f(vector<vector<int>>& grid1, vector<vector<int>>& grid2, int i, int j, int m, int n, int &ans)
    {
        if(i < 0 || j < 0 || i >= m || j >= n) return;
        if(grid1[i][j] == 0 && grid2[i][j] == 1) ans = 0;
        if(grid2[i][j] == 0) return;
        
        grid2[i][j] = 0;
        f(grid1, grid2, i+1, j, m, n, ans);
        f(grid1, grid2, i-1, j, m, n, ans);
        f(grid1, grid2, i, j+1, m, n, ans);
        f(grid1, grid2, i, j-1, m, n, ans);
    }
    
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int ans = 0;
        for(int i = 0; i < grid1.size(); i++)
        {
            for(int j = 0; j < grid1[0].size(); j++)
            {
                int u = 1;
                if(grid2[i][j] == 1){
                    f(grid1, grid2, i, j, grid1.size(), grid1[0].size(), u);
                    ans += u; 
                }
            }
        }
        
        return ans;
    }
};