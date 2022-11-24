class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp.insert({0,-1});
        int rem;
        int sum = 0;
        
        for(int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            rem = sum%k;
            auto it = mp.find(rem);
            
            if(it != mp.end() && i-it->second >= 2)
                return true;
            mp.insert({rem, i});
        }
        return false;
    }
};