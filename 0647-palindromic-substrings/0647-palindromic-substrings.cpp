class Solution {
public:
    int countSubstrings(string s) {
        bool dp[1001][1001] = {false};
        int d = s.length();
        
        int count = 0;
        for(int dist = 0; dist < d; dist++)
        {
            for(int i = 0, j = i+dist; j < d; i++, j++)
            {
                if(i == j)dp[i][j] = true;
                if(dist == 1 && s[i]==s[j]) dp[i][j] = true;
                if(dist > 1 && s[i]==s[j] && dp[i+1][j-1]) dp[i][j] = true;
                if(dp[i][j])count++;
            }
        }
        return count;
    }
};