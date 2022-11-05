class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        // Moore's Voting Algo 
        
        int maj;
        int count = 0;
        int s = nums.size();
        for(int i =0; i < s; ++i)
        {
            if(count == 0) maj = nums[i];
            if(maj == nums[i]) ++count;
            else --count;
        }
        return maj;
        
        //using map
        // unordered_map<int, int> mp;
        // int s = nums.size();
        // int ans;
        // for(auto i : nums)
        // {
        //     mp[i]++;
        // }
        // for(auto it = mp.begin(); it != mp.end(); ++it)
        // {
        //     if(it->second > s/2) ans = it->first;
        // }
        // return ans;
    }
};