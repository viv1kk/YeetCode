class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        long long sum = nums[0];
        long long mx = nums[0];
        
        for(long long i = 1; i < nums.size(); i++)
        {
            sum += nums[i];
            mx = max(mx, (sum+i)/(i+1));
        }
        return mx;
    }
};