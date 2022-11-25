class Solution {
public:
    string longestPalindrome(string s) {
        int dp[1004][1004] = {0};
        string r = s;
        reverse(r.begin(), r.end());
        
        int mx = 0;
        int ind = 0;
        int n = s.length();
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                if(r[i-1] == s[j-1]) dp[i][j] = dp[i-1][j-1]+1;
                
                if(dp[i][j] > mx)
                {
                    string t1 = s.substr((j-dp[i][j]), dp[i][j]);
                    string t2 = t1;
                    reverse(t2.begin(), t2.end());
                    if(t1 == t2)
                    {
                        cout<<t1<<endl;
                        mx = dp[i][j];
                        ind = j-dp[i][j];
                    }
                }
            }
        }
        
        // for(int i = 1; i <= n; i++)
        // {
        //     for(int j = 1; j <= n; j++)
        //     {
        //         cout<<dp[i][j]<<", ";
        //     }
        //     cout<<endl;
        // }
        string ans = s.substr(ind, mx);
        return ans;
    }
};