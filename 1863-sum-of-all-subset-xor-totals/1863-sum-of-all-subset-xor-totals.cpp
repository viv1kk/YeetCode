class Solution {
public:
    int ans = 0;
    void f(vector<int>&nums, int ind, int sum)
    {
        if(ind == nums.size())
        {
            ans += sum;
            return;
        }
        
        f(nums, ind+1, sum^nums[ind]);
        f(nums, ind+1, sum);
    }
    
    int subsetXORSum(vector<int>& nums) {
        f(nums, 0, 0);
        return ans;
    }
};