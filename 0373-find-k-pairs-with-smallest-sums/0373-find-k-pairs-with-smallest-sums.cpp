class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>>ans;
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int,int>>>, greater<pair<int, pair<int, int>>> >pq;
        
        for(int i = 0; i < nums1.size(); i++){
            pq.push( {nums1[i]+nums2[0], {i, 0}} );
        }
        
        int m = nums2.size();
        while(!pq.empty() && k--)
        {
            auto [a, b] = pq.top();
            auto [c, d] = b;
            pq.pop();
            ans.push_back({nums1[c], nums2[d]});
            
            if(d < m-1){
                pq.push({nums1[c]+nums2[d+1],{c, d+1}});
            }
        }
        return ans;
    }
};