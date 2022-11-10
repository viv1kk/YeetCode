class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        int best_len = 0;
        int best_ind = 0;
        
        vector<vector<bool>>dp(n, vector<bool>(n, 0));
        
        for(int dist = 0; dist < n; dist++)
        {
            for(int i = 0, j = dist+i; i+dist < n; i++, j++)
            {
                if(i==j) dp[i][j] = true;
                if(dist == 1) dp[i][j] = (s[i]==s[j]);
                if(dist > 1) dp[i][j] = (s[i]==s[j] && dp[i+1][j-1]);
                
                if(dp[i][j] && best_len < dist)
                {
                    best_len = dist;
                    best_ind = i;
                }
                
            }
        }
        
        string ans = s.substr(best_ind, best_len+1);
        return ans;
    }    
};