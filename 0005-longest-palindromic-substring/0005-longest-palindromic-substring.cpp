class Solution {
public:
    string longestPalindrome(string s) {
                int n = s.length();

        int dp[1001][1001]={0};
        int mx = 0;
        int id = 0;
                // vector<vector<bool>>dp(n, vector<bool>(n, false));

        
        for(int dist = 0; dist < s.length(); dist++)
        {
            for(int i = 0, j = i+dist; i+dist < s.length(); i++, j++)
            {
                if(i==j) dp[i][j] = 1;
                if(dist == 1 && s[i]==s[j]) dp[i][j] = true;
                if(dist > 1 && s[i] == s[j] && dp[i+1][j-1] == true) dp[i][j] = true;
                
                if(dp[i][j] && mx< dist)
                {
                    mx = dist;
                    id = i;
                }
            }
        }
        string ans = s.substr(id, mx+1);
        return ans;
    }
};