class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        int count = 0;
        for(int i = 0; i < m; i++)
        {
            int x = 0, y = n-1;
            int neg = n;
            
            while(x <= y)
            {
                int mid = x+(y-x)/2;
                if(grid[i][mid] >= 0)
                {
                    x = mid+1;
                }
                else
                {
                    neg = mid;
                    y = mid-1;        
                }
            }
            count += (n-neg);
        }
        return count;
    }
};