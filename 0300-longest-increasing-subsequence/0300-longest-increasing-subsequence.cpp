class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        
        vector<int>dp(n, 1);
        
        for(int i = 0; i < n; i++)
        {
            int prev = i;
            for(int j = i+1; j < n; j++)
            {
                if(nums[prev] < nums[j])
                {
                    dp[j] = max(dp[prev]+1, dp[j]);
                }
            }
        }
        return *max_element(dp.begin(), dp.end());
    }
};