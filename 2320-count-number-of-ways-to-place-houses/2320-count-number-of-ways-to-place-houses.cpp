class Solution {
public:
    int countHousePlacements(int n) {
        if(n == 1)return 4;
        // if(n == 2)return 9;
        
        int mod = pow(10,9)+7;
        vector<long long>dp(n+1, 0);
        dp[0] = 2;
        dp[1] = 3;
        
        for(int i = 2; i < n; i++)
        {
            dp[i] = (dp[i-1] + dp[i-2])%mod;
        }
        return dp[n-1]*dp[n-1]%mod;
    }
};