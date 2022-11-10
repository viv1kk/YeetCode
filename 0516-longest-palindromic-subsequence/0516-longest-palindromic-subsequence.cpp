class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string r = s;
        reverse(r.begin(), r.end());
        
        int l1 = s.length();
        int l2 = r.length();
        
        vector<vector<int>>dp(l1+1, vector<int>(l2+1, 0));
        
        for(int i = 1; i <= l1; i++)
        {
            for(int j = 1; j <= l2; j++)
            {
                if(s[i-1] == r[j-1]) dp[i][j] = dp[i-1][j-1]+1;
                else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        return dp[l1][l2];
    }
};