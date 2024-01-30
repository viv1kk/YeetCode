class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& a, vector<int>& ni) {
        vector<vector<int>>ans;
        int idx = 0;
        int n = a.size();
        
        while(idx < n && a[idx][1] < ni[0]) ans.push_back(a[idx++]);
        int l = 0, r = 0;
        while(idx < n && a[idx][0] <= ni[1]){
            ni[0] = min(a[idx][0], ni[0]);
            ni[1] = max(a[idx][1], ni[1]);
            idx++;
        }
        ans.push_back(ni);
        
        while(idx < n) ans.push_back(a[idx++]);
        return ans;
    }
};