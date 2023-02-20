class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        priority_queue<pair<int, int>>pq;
        vector<pair<int, int>> v;
        vector<int>ans;
        
        for(auto i : nums) mp[i]++;
        for(auto i : mp) v.push_back({i.second, i.first});
        for(auto i : v) pq.push(i);
        while(k--)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};