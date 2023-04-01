class Solution {
public:
    set<vector<int>>st;
    
    void f(vector<int>&nums, vector<int>&temp, int i)
    {
        if(i > nums.size()) return;
        if(i == nums.size())
        {
            sort(temp.begin(), temp.end());
            st.insert(temp);
            return;
        }
        
        temp.push_back(nums[i]);
        f(nums, temp, i+1);
        temp.pop_back();
        f(nums, temp, i+1);
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int>temp;
        f(nums, temp, 0);
        return vector<vector<int>>(st.begin(), st.end());
    }
};
