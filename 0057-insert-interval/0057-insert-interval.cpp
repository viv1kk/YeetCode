class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& a, vector<int>& ni) {
        vector<vector<int>>ans;
        int idx = 0;
        int n = a.size();
        
        while(idx < n && a[idx][1] < ni[0]) ans.push_back(a[idx++]);
        int l = ni[0], r = ni[1];
        while(idx < n && a[idx][0] <= ni[1]){
            l = min(a[idx][0], l);
            r = max(a[idx][1], r);
            idx++;
        }
        ans.push_back({l, r});
        
        while(idx < n) ans.push_back(a[idx++]);
        return ans;
    }
};