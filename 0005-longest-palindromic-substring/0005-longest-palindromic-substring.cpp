class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        vector<vector<bool>>dp(n, vector<bool>(n, false));
        
        int ind = 0, max = 0;
        for(int dist = 0; dist < n; dist++)
        {
            for(int i = 0, j = i+dist; i+dist < n; i++, j++)
            {
                if(i==j) dp[i][j] = true;
                if(dist == 1 && s[i] == s[j]) dp[i][j] = true;
                if(dist > 1 && s[i] == s[j] && dp[i+1][j-1] == true) dp[i][j] = true;
                
                if(dp[i][j] && max < dist)
                {
                    max = dist;
                    ind = i;
                }
            }
        }
        string ans = s.substr(ind, max+1);
        return ans;
    }
};