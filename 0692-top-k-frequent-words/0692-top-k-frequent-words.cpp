class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int>mp;
        for(auto i : words)
            mp[i]++;
        priority_queue<pair<int, string>>pq;
        for(auto[a, b] : mp)
            pq.push({b, a});

        priority_queue<pair<string, int>, vector<pair<string, int>>, greater<pair<string, int>> >pq2;
        
        vector<string>ans;
        int count = k;
        while(!pq.empty())
        {
            auto[a, b] = pq.top();
            pq2.push({b, a});
            pq.pop();
            while(!pq.empty() && pq.top().first == a)
            {
                auto[c, d] = pq.top();
                pq2.push({d, c});
                pq.pop();
            }
            while(!pq2.empty() && count)
            {
                ans.push_back(pq2.top().first);
                pq2.pop();
                count--;
            }
            if(count == 0) break;
        }
        return ans;   
    }
};