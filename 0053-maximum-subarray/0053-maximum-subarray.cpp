class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int m = INT_MIN;
        int sum = 0;
        
        for(auto it : nums)
        {
            sum += it;
            m = max(sum, m);
            if(sum < 0) sum = 0;
        }
        
        return m;
    }
};