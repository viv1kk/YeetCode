class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int>mp;
        for(int i = 0; i < nums.size(); i++)
        {
            int f = target-nums[i];
            auto it = mp.find(f);
            if(it == mp.end()) mp.insert({nums[i], i});
            else return {i, it->second};
        }
        return {};
    }
};