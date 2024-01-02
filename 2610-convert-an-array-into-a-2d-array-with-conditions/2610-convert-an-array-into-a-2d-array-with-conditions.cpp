class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        map<int, int>mp;
        
        for(int i : nums){
            mp[i]++;
        }
        int mx = 0;
        
        for(auto[i,j] : mp){
            mx = max(mx, j);
        }
        
        vector<vector<int>>v(mx);
        
        for(auto[i, j] : mp){
            for(int k= 0; k < j; k++){
                v[k].emplace_back(i);
            }
        }
        return v;
    }
};