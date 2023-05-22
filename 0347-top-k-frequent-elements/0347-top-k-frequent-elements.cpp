class Solution {
public:
    void func(unordered_map<int,int>&mp,vector<int>&ans, int k)
    {
        if(k == 0)return;
        
        int mx = 0;
        int val = 0;
        for(auto i : mp)
        {
            if(mx < i.second)
            {
                val = i.first;
                mx = i.second;
            }
        } 
        ans.push_back(val);
        mp.erase(val);
        func(mp, ans, k-1);
    }
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i : nums)
        {
            mp[i]++;
        }
        
        vector<int>ans;
        func(mp, ans, k);
        return ans;
    }
};