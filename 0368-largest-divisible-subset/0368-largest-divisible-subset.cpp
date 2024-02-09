class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        vector<int>dp(n, 1), prev(n);
        int s = 1, li = 0;
        
        for(int i = 0; i < n; i++)
        {
            prev[i] = i;
            for(int j = 0; j < i; j++){
                if(nums[i]%nums[j] == 0 && dp[i] < 1+dp[j]){
                    dp[i] = 1+dp[j];
                    prev[i] = j;
                }
            }
            if(s < dp[i]){
                s = dp[i];
                li = i;
            }
        }
        
        vector<int>ans;
        ans.push_back(nums[li]);
        while(prev[li] != li){
            li = prev[li];
            ans.push_back(nums[li]);
        }
        
        
        return ans;
    }
};