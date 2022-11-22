class Solution {
public:
    string longestPalindrome(string s) {
        bool dp[1001][1001] = {false};
        
        int n = s.length();
        int mx = 0;
        int ind = 0;
        for(int d = 0 ; d < n; d++)
        {
            for(int i = 0, j = i+d; j < n; i++, j++)
            {
                if(i == j)dp[i][j] = true;
                if(d == 1 && s[i] == s[j]) dp[i][j] = true;
                if(d > 1 && s[i] == s[j] && dp[i+1][j-1]) dp[i][j] = true;
                
                if(d > mx && dp[i][j]){
                    ind = i;
                    mx = d;
                }
            }
        }
        string st = s.substr(ind, mx+1);
        return st;
    }
};