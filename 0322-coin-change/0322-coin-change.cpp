class Solution {
public:
    int f(vector<int>&c, int amount, int i, vector<vector<int>>&dp){
        if(amount == 0) return 0;
        if(i == c.size()) return INT_MAX-1;
        if(dp[i][amount]) return dp[i][amount];
        
        int res = -1;
        if(c[i] > amount){
            res = f(c, amount, i+1, dp);
        }
        else res = min(1+f(c, amount-c[i], i, dp), f(c, amount, i+1, dp));
        return dp[i][amount] = res;
    }
    
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>>dp(coins.size()+1, vector<int>(amount+1, 0));
        int x = f(coins, amount, 0, dp);
        return x == INT_MAX -1? -1:x;
    }
};