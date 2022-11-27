class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int count = 1;
        int mx = 1;
        
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i-1] < nums[i])
            {
                count++;
                mx = max(count, mx);
            }                
            else
                count = 1;
        }
        return mx;
    }
};