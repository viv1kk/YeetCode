class Solution {
public:
    
    int dp[101] = {0};
    
    
    int mx = 0;
    void f(int i, int n)
    {
        if(i > n) return;
        if(2 <= 2*i && 2*i <= n)
        {
            dp[2*i] = dp[i];
        }
        if(2 <= 2*i+1 && 2*i+1 <= n)
        {
            dp[2*i+1] = dp[i] +dp[i+1];
        }
        mx = max(mx, dp[i]);
        f(i+1, n);
    }
    
    int getMaximumGenerated(int n) {
        dp[0] = 0;
        dp[1] = 1;
        f(0, n);
        return mx;
    }
};