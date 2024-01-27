class Solution {
public:
    
    int f(int n, int k, vector<vector<int>>&dp)
    {
        if(n == 0)return 0;
        if(k == 0) return 1;
        if(dp[n][k] != INT_MIN) return dp[n][k];
        
        long long ans = 0;
        for(int i = 0; i <= min(k, n-1); i++){
            ans += f(n-1, k-i, dp)%1000000007;
        }
        return dp[n][k] = ans%1000000007;
    }
    
    
    int kInversePairs(int n, int k) {
        vector<vector<long long>>dp(n+1, vector<long long>(k+1, 0));
        int mod = 1000000007;
        dp[0][0] = 1;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 0; j <= k; j++)
            {
                if(j == 0){
                    dp[i][j] = 1;
                    continue;
                } 
                dp[i][j] = (dp[i-1][j]+dp[i][j-1])%mod;
                if(j >= i) dp[i][j] = (dp[i][j]-dp[i-1][j-i]+mod)%mod;
            }
        }
        return dp[n][k];
    }
};