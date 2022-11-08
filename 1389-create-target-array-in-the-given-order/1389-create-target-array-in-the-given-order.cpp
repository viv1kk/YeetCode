class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int>ans(index.size(), -1);
        for(int i = 0; i < nums.size(); i++)
        {
            int ind = index[i];
            if(ans[ind] == -1)
            {
                ans[ind] = nums[ind];
            }
            else
            {
                ans.insert(ans.begin()+ind, nums[i]);
            }
        }
        return {ans.begin(), ans.begin()+nums.size()};
    }
};