class Solution {
public:
    string longestPalindrome(string s) {
        bool dp[1001][1001] = {false};
        // string r = s;
        // reverse(r.begin(), r.end());
        
        int n = s.length();
        int mx = 0;
        int ind = 0;
        for(int dist = 0; dist < n; dist++)
        {
            for(int i = 0, j = dist+i; j < n; j++, i++)
            {
                if(i == j)dp[i][j] = true;
                if(dist == 1 && s[i] == s[j]) dp[i][j] = true;
                if(dist > 1 && s[i] == s[j] && dp[i+1][j-1]) dp[i][j] = true;
                if(dp[i][j] &&  mx <dist)
                {
                    ind = i;
                    mx = dist;
                }
            }
        }
        string ans = s.substr(ind, mx+1);
        return ans;
    }
};