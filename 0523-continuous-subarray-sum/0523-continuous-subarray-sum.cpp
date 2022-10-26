class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp.insert({0, -1}); // is the first element is a multiple of k then to compare put a initial value
        
        int sum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            int mod = sum%k;
            
            auto it = mp.find(mod);
            if(it == mp.end())
                mp.insert({mod, i});
            else
            {
                if(i - it->second >= 2)
                    return true;
                else
                    mp.insert({mod, i});
            }
        }
        return false;
    }
};