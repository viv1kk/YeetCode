class Solution {
public:
    int n;
    int f(vector<int>&arr, vector<int>&dp, int k, int ind){
        if(ind == n) return 0;
        if(dp[ind]) return dp[ind];
        int mx = 0;
        int ans = 0;
        for(int i = ind; i < min(ind+k, n); i++){
            mx = max(mx, arr[i]);
            ans = max(ans, ((i-ind+1)*mx)+f(arr,dp, k, i+1));
        }
        return dp[ind] = ans;
    }
    
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        this->n = arr.size();
        vector<int>dp(n, 0);
        return f(arr, dp, k, 0);
    }
};