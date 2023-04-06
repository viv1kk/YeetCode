class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>>ans;
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int,int>>>, greater<pair<int, pair<int, int>>> >pq;

        pq.push({nums1[0]+nums2[0], {0,0}});
        while(!pq.empty() && k--)
        {
            auto [a, b] = pq.top(); pq.pop();
            auto [c, d] = b;
            ans.push_back({nums1[c], nums2[d]});
            
            if (c + 1 < nums1.size())
                pq.push({nums1[c+1]+nums2[d],{c+1, d}});
            if (c == 0 && d + 1 < nums2.size())
                pq.push({nums1[c]+nums2[d+1],{c, d+1}});
        }
        return ans;
    }
};