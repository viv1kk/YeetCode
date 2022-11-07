class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int>mp;
        int count = 0;
        for(int i = 0; i < nums.size(); ++i){
            auto it = mp.find(nums[i]);
            mp[nums[i]]++;
            
            if(mp[nums[i]] > 1)
                count += mp[nums[i]]-1;
        }
        return count;
    }
};