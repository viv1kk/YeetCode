class Solution {
public:
    vector<int> countBits(int n) {
        int dp[n+1];
        vector<int>ans;

        dp[0] = 0;
        ans.push_back(0);
        
        int x = 1;
        for(int i = 1; i <= n; i++)
        {
            if(x*2 == i) x = i;
            ans.push_back(dp[i] = 1 + dp[i-x]);
        }
        return ans;
    }
};