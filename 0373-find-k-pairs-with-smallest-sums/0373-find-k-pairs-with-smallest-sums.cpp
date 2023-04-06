class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>>ans;
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int,pair<int, int>>> >pq;
        pq.push({nums1[0]+nums2[0],{0,0}});
        while(!pq.empty() && k--)
        {
            auto[c, d] = pq.top();
            auto[a, b] = d;
            
            pq.pop();
            ans.push_back({nums1[a], nums2[b]});
            if(b+1 < nums2.size())
                pq.push({nums1[a]+nums2[b+1], {a, b+1}});
            if(b==0 && a+1 < nums1.size())
                pq.push({nums1[a+1]+nums2[b],{a+1, b}});
        }
        return ans;
    }
};