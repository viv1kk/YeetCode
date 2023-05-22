class Solution {
public:
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i : nums)
        {
            mp[i]++;
        }
        
        vector<pair<int, int>>t = vector<pair<int,int>>(mp.begin(), mp.end());
        
        sort(t.begin(), t.end(), [&](pair<int, int>&a, pair<int, int>&b){
            return a.second > b.second;
        });
        
        vector<int> ans;
        for(int i = 0 ; i < k; i++)
        {
            ans.push_back(t[i].first);
        }
        return ans;
        
    }
};