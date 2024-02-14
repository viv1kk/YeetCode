class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int m = nums.size();
        vector<int>ans;
        
        for(int p = 0, n = 0; p < m && n < m; )
        {
            if(nums[p] > 0 && nums[n] < 0){
                ans.push_back(nums[p]);
                ans.push_back(nums[n]);
                p++, n++;
            }
            else{
                if(nums[p] < 0)p++;
                if(nums[n] > 0)n++;
            }
        }
        return ans;
    }
};