class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp;
        int i = 0;
        vector<int> ans; 
        while(i < nums.size())
        {
            int f = target - nums[i];
            auto s = mp.find(f);
            if(s == mp.end())
                mp.insert({nums[i], i});
            else
            {
                ans.push_back(i);
                ans.push_back(s->second);
                break;
            }
            ++i;
        }
        return ans;
    }
};