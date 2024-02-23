class Solution {
public:
    vector<vector<int>>dp;
    
    int f(vector<int>&c, int i, int a){
        if(a == 0) return 1;
        if(a < 0) return 0;
        if(i == c.size()) return 0;
        if(dp[i][a] != -1) return dp[i][a];
        
        int ans = f(c, i+1, a)+f(c, i, a-c[i]);
        return dp[i][a]=ans;
    }
    
    int change(int amount, vector<int>& coins) {
        dp = vector<vector<int>>(coins.size(), vector<int>(amount+1, -1)); 
        return f(coins, 0, amount);
    }
};