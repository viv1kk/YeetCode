class Solution {
public:
    
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        queue<tuple<int, int, int>>q;
        int m = mat.size(), n = mat[0].size();
        vector<vector<int>>dp(m, vector<int>(n, -1));
        vector<vector<bool>>vis(m, vector<bool>(n, false));
        
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(!mat[i][j]){
                    q.push({i, j, 0});
                }
            }
        }
        while(!q.empty()){
            int x,y,z;
            tie(x, y, z) = q.front();
            if(!vis[x][y]){
                vis[x][y] = true;
                dp[x][y] = z;
                if(x+1 < m) q.push({x+1, y, z+1});
                if(x-1 > -1) q.push({x-1, y, z+1});
                if(y+1 < n) q.push({x, y+1, z+1});
                if(y-1 > -1) q.push({x, y-1, z+1});
            }
            q.pop();
        }
        
        return dp;
    }
};