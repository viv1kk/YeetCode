class Solution {
public:
    
    int ans = 0;
    bool flag = true;
    
    void f(vector<vector<int>>&grid, int i, int j)
    {
        if(i >= grid.size() || j >= grid[0].size() || i < 0 || j < 0)
        {
            flag = false;
            return;
        }
        // if(grid[i][j] == -1) return;
        if(grid[i][j] == 1)
            return;

        
        int temp = grid[i][j];
        
        grid[i][j] = 1;
        if(flag)f(grid, i+1, j);
        if(flag)f(grid, i-1, j);
        if(flag)f(grid, i, j+1);
        if(flag)f(grid, i, j-1);
        if(!flag)grid[i][j] = temp;
    }
    
    int closedIsland(vector<vector<int>>& grid) {
        for(int i = 1; i < grid.size()-1; i++)
        {
            for(int j = 1; j < grid[0].size()-1; j++)
            {
                if(grid[i][j] == 0)
                {
                    f(grid, i, j);
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