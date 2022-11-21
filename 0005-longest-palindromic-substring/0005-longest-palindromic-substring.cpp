class Solution {
public:
    string longestPalindrome(string s) {
    
        int dp[1001][1001] = {0};
        int n = s.length();
        int m = 0;
        int ind = 0;
        for(int d = 0; d < n; d++)
        {
            for(int i = 0, j = i+d;  j < n; i++, j++)
            {
                if(i == j) dp[i][j] = 1;
                if(d == 1 && s[i] == s[j]) dp[i][j] = 1;
                if(d > 1 && s[i] == s[j] && dp[i+1][j-1] == 1)dp[i][j] = 1;
                if(m < d && dp[i][j] == 1)
                {
                    m = d;
                    ind = i;
                }
            }
        }
        string ans = s.substr(ind, m+1);
        return ans;
    }
};