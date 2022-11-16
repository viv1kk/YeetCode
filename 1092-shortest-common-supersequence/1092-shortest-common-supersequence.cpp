class Solution {
public:
    
    int LCS(vector<vector<int>>&dp,string &str1, string&str2)
    {
        int n1 = str1.length();
        int n2 = str2.length();
        for(int i = 1; i <= n1; i++)
        {
            for(int j = 1; j <=n2; j++)
            {
                if(str1[i-1] == str2[j-1])
                {
                    dp[i][j] = dp[i-1][j-1]+1;
                }
                else
                {
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        return dp[n1][n2];
    }
    string shortestCommonSupersequence(string str1, string str2) {
        int n1 = str1.length();
        int n2 = str2.length();
        
        vector<vector<int> >dp(n1+1, vector<int>(n2+1, 0));
        
        int lc = LCS(dp, str1, str2);
        string ans = "";
        
        int i = n1, j= n2;
        while(i > 0 && j > 0)
        {
            if(str1[i-1]==str2[j-1])
            {
                ans +=str1[i-1];
                i--;
                j--;
            }
            else if(dp[i-1][j] > dp[i][j-1])
            {
                ans += str1[i-1];
                i--;
            }
            else
            {
                ans += str2[j-1];
                j--;
            }
        }
        
        while(i > 0)
        {
            ans += str1[i-1];
            i--;
        }
        
        while(j > 0)
        {
            ans += str2[j-1];
            j--;
        }
        reverse(ans.begin(), ans.end());
    
        
        // cout<<s;
        return ans;
        
    }
};