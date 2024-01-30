class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size(); 
        vector<int> ans(n);
        int i = 0, j = n-1;
        
        int ind = n-1;
        while(i <= j){
            if(abs(nums[i]) > abs(nums[j])) ans[ind--] = nums[i]*nums[i++];
            else ans[ind--] = nums[j]*nums[j--];
        }
        return ans;
    }
};