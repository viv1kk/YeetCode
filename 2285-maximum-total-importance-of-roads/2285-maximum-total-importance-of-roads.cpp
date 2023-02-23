class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        unordered_map<int, int>mp;
        
        for(auto i : roads)
        {
            mp[i[0]]++;
            mp[i[1]]++;
        }
        long long ans = 0;
        priority_queue<long long>pq;
        
        for(auto i: mp)
        {
            pq.push(i.second);
        }
        while(!pq.empty() && n)
        {
            ans += n*pq.top();
            n--;
            pq.pop();
        }
        return ans;
    }
};