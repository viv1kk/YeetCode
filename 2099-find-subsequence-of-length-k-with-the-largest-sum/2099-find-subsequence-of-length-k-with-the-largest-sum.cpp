class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>c;
        
        for(int i = 0; i < nums.size(); i++)
        {
            c.push({nums[i], i});
        }    
        priority_queue<pair<int,int>, vector<pair<int, int>>, greater<pair<int, int>> >pq;
        
        while(k--)
        {
            auto[a, b] = c.top();
            pq.push({b, a});
            c.pop();            
        }
        
        vector<int>ans;
        while(!pq.empty())
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};