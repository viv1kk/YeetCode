class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int count = 1;
        int mx = 1;
        int n = nums.size();
        for(int i = 1; i < n; i++)
        {
            if(nums[i-1] < nums[i])
            {
                ++count;
                mx = (count > mx)?count:mx;
            }                
            else
                count = 1;
        }
        return mx;
    }
};