class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        
        int s = nums.size();
        int ans;
        for(auto i : nums)
        {
            mp[i]++;
        }
        for(auto it = mp.begin(); it != mp.end(); ++it)
        {
            if(it->second > s/2) ans = it->first;
        }
        return ans;
    }
};