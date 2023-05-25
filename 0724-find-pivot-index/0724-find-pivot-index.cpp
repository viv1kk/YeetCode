class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        for(int i : nums) sum += i;
        
        int s = 0;
        for(int i = 0; i < n; i++)
        {
            sum -= nums[i];
            if(s == sum) return i;
            s += nums[i];
        }
        return -1;
    }
};