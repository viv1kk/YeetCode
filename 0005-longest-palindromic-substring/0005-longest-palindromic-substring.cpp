class Solution {
public:
    string longestPalindrome(string s) {
        int dp[1001][1001] = {0};
        string r = s;
        reverse(r.begin(), r.end());
        
        int n = s.length();
        int mx = 0;
        int ind = 0;
        for(int d = 0; d < n; d++)
        {
            for(int i = 0, j = i+d; j < n; i++, j++)
            {
                if(i == j) dp[i][j] = 1;
                if(d == 1 && s[i] == s[j]) dp[i][j] = 1;
                if(d > 1 && s[i] == s[j] && dp[i+1][j-1] == 1) dp[i][j] = 1;
                
                if(dp[i][j] == 1 && mx < d)
                {
                    mx = d;
                    ind = i;
                }
            }
        }
        string ans = s.substr(ind, mx+1);
        return ans;
    }
};