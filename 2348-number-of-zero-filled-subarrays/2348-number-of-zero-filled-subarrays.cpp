class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans = 0;
        int n = nums.size();
        long long x = 0;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] == 0)
                x++;
            else{
                ans += (x*(x+1))/2;
                x = 0;
            } 
        }
        ans += (x*(x+1))/2;
        return ans;
    }
};