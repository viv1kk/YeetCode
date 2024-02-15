class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        long long sum = nums[0]+nums[1];
        long long ans = -1;
        for(int i = 2; i < n; i++){
            if(sum > nums[i]){
                ans = sum+nums[i];
            }
            sum += nums[i];
        }
        return ans;
    }
};