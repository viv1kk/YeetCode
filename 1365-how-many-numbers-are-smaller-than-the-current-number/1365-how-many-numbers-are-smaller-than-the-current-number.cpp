class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>v = nums;
        unordered_map<int, int>mp;
        
        sort(v.begin(), v.end());
        for(int i = 0; i < nums.size(); i++)
        {
            auto it = mp.find(v[i]);
            if(it == mp.end())
            {
                mp[v[i]] = i;
            }
        }
        for(int i = 0; i < nums.size(); i++)
        {
            nums[i] = mp[nums[i]];
        }
        return nums;
    }
};