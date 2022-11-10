class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int n = s.length();
        string r = s;
        reverse(r.begin(), r.end());
        
        int dp[1001][1001];
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                if(s[i-1] == r[j-1]) dp[i][j] = dp[i-1][j-1]+1;
                else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        return dp[n][n];
    }
};