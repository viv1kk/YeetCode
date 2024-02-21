class Solution {
public:
    int dp[10001];
    int f(vector<int>&nums, int i, int n){
        if(i >= n) return false;
        if(i == n-1) return true;
        if(dp[i]!= -1)return dp[i];
        int j = min(nums[i]+i, n);
        bool ans = 0;
        
        while(j > i){
            ans |= f(nums, j, n);
            j--;
        }
        return dp[i] = ans;
    }
    
    bool canJump(vector<int>& nums) {
        memset(dp, -1, sizeof dp);
        return f(nums, 0, nums.size());
    }
};