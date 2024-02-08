class Solution {
public:
    int f(vector<int>&v, int ind, int n, int s, vector<vector<int>>&dp){
        if(n == 0) return 0;
        if(n < 0) return 1000;
        if(ind == s) return 1000;
        if(dp[ind][n] != -1)return dp[ind][n];
        return dp[ind][n] = min(1+f(v, ind, n-v[ind], s, dp), f(v, ind+1, n, s, dp));
    }
    
    int numSquares(int n) {
        vector<int>v(n+1, 0);
        
        vector<int>pf;
        for(int i = 1; i <= n; i++)
        {
            if(i*i <= n){
                v[i*i] = 1;
            }
            if(v[i]){
                pf.push_back(i);
            }
        }
        
        vector<vector<int>>dp(pf.size(),vector<int>(n+1, -1));
        return f(pf, 0, n, pf.size(), dp);
    }
};