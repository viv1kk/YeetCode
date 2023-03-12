class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for(int i : nums) sum +=i;
        int i= 0;
        int x = 0;
        for(i = 0; i < nums.size(); i++)
        {
            sum -= nums[i];
            if(x == sum) return i;
            x += nums[i];
        }
        return -1;
    }
};