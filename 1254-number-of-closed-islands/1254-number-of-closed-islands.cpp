class Solution {
public:
    
    bool flag = true;
    void f(vector<vector<int>>&grid, int i, int j, int &m, int &n)
    {
        if(i >= m || j >= n || i < 0 || j < 0)
        {
            flag = false;
            return;
        }
        if(grid[i][j] == 1)return;        
        int temp = grid[i][j];
        grid[i][j] = 1;
        
        if(flag)f(grid, i+1, j, m, n);
        if(flag)f(grid, i-1, j, m, n);
        if(flag)f(grid, i, j+1, m, n);
        if(flag)f(grid, i, j-1, m, n);
        if(!flag)grid[i][j] = temp;
    }
    
    int closedIsland(vector<vector<int>>& grid) {
        int ans = 0;
        int m = grid.size();
        int n = grid[0].size();
        
        for(int i = 1; i < m-1; i++){
            for(int j = 1; j < n-1; j++){
                if(grid[i][j] == 0){
                    f(grid, i, j, m, n);
                    if(flag ==  true)
                        ans++;
                }
                flag = true;
            }
        }
        // for(int i = 1; i < grid.size()-1; i++)
        // {
        //     for(int j = 1; j < grid[0].size()-1; j++)
        //     {
        //         cout<<grid[i][j]<<"\t";
        //     }
        //     cout<<endl;
        // }
        return ans;
    }
};