class Solution {
public:
    
    int f(vector<int>& A, int prev, int i, vector<vector<int>>&dp){
        if(i == A.size()) return 0;
        if(dp[i][prev+1] != -1) return dp[i][prev+1];
        int x = 0;
        if(prev == -1 || A[prev] < A[i])
            x = 1 + f(A, i, i+1, dp);
        return dp[i][prev+1] = max(f(A, prev, i+1, dp), x);
    }
    
    
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>dp(n,vector<int>(n+1, -1));
        return f(nums, -1, 0, dp);
    }
};