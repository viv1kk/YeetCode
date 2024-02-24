class Solution {
public:
    int dp[101][101];
    
    int f(vector<vector<int>>&flights, int n, int src, int dst, int k){
        if(src == dst) return 0;
        if(k <= 0) return 1e9;
        if(dp[src][k] != -1) return dp[src][k];
        
        int ans = 1e9;
        for(int i = 0; i < n; i++){
            if(flights[i][0] == src){
                ans = min(ans, flights[i][2]+f(flights, n, flights[i][1], dst, k-1));
            }
        }
        return dp[src][k] = ans;
    }
    
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        memset(dp, -1, sizeof dp);
        int ans = f(flights, flights.size(), src, dst, k+1);
        if (ans >= 1e9) return -1;
        return ans;
    }
};