class Solution {
public:
    vector<vector<int>>ans;
    
    void f(vector<int>&nums, int ind, vector<int>&temp)
    {
        if(ind == nums.size())
        {
            ans.emplace_back(temp);
            return;
        }
        
        temp.push_back(nums[ind]);
        f(nums, ind+1, temp);
        temp.pop_back();
        f(nums, ind+1, temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;
        f(nums, 0, temp);
        return ans;
    }
};