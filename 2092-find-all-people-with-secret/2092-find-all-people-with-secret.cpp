class Solution {
public:    
    
    void dfs(int i, unordered_map<int, vector<int>>&mp, unordered_set<int>&vis, vector<int>&ans){
        if(vis.find(i) != vis.end()) return;
        vis.insert(i);
        ans[i] = 1;
        for(int k : mp[i]){
            dfs(k, mp, vis, ans);
        }
    }
    
    vector<int> findAllPeople(int n, vector<vector<int>>&m, int firstPerson) {
        map<int, unordered_map<int, vector<int>>>mp;
        for(auto &i : m){
            mp[i[2]][i[1]].push_back(i[0]);
            mp[i[2]][i[0]].push_back(i[1]);
        }
        vector<int>ans(n,0);
        
        ans[0] = 1;
        ans[firstPerson] = 1;
        
        for(auto&[i, j] : mp){
            unordered_set<int>vis;
            for(auto&[k, l] : j){
                if(ans[k]){
                    for(int c : l){
                        dfs(c, j, vis, ans);
                    }
                }
            }
        }
        
        vector<int>a;
        for(int i = 0; i < n; i++){
            if(ans[i])a.push_back(i);
        }
        return a;
    }
};