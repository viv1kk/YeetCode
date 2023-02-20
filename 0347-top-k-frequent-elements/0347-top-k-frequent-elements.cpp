class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        
        for(auto i : nums)
        {
            mp[i]++;
        }
        
        priority_queue<pair<int, int>>pq;
        
        vector<pair<int, int>> v;
        for(auto i : mp)
        {
            v.push_back({i.second, i.first});
        }
        
        for(auto i : v)
        {
            pq.push(i);
        }
        
        vector<int>ans;
        while(k--)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};