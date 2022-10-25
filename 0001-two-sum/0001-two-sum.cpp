class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // using map
        // map<int, int>mp;
        // for(int i = 0; i < nums.size(); i++)
        // {
        //     int f = target-nums[i];
        //     auto it = mp.find(f);
        //     if(it == mp.end()) mp.insert({nums[i], i});
        //     else return {i, it->second};
        // }
        // return {};
        
        // using unordered_map
        unordered_map<int, int>mp;
        for(int i = 0; i < nums.size(); i++)
        {
            int f = target-nums[i];
            auto it = mp.find(f);
            if(it == mp.end()) mp.insert({nums[i], i});
            else return {i, it->second};
        }
        return {};
        
        //bruteforce
        // for(int i = 0; i < nums.size(); ++i)
        // {
        //     for(int j = i; j < nums.size(); ++j)
        //     {
        //         if(i == j) continue;
        //         if(nums[i]+nums[j] == target)
        //         {
        //             return {i, j};
        //         }
        //     }
        // }
        // return {};
    }
};