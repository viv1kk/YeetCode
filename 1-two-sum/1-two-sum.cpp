class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp;
        vector<int> ans;
        for(int i = 0; i < nums.size(); ++i)
        {
            mp.insert({nums[i], i});
        }
        
        for(int i = 0;  i < nums.size(); ++i)
        {
            auto it = mp.find(target-nums[i]);       
            if(it != mp.end() && it->second != i)
            {
                ans.push_back(i);
                ans.push_back(it->second);
                break;
            }
        }
        return ans;
    }
};