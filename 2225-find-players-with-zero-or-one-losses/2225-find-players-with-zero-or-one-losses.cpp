class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int, int>mp;
        
        set<int>mem;
        for(auto &i : matches){
            mp[i[1]]++; //looser
            mem.insert(i[0]);
            mem.insert(i[1]);
        }
        
        
        vector<vector<int>>ans(2);
        for(int i : mem){
            if(mp.find(i) == mp.end()) ans[0].push_back(i);
        }
        
        for(auto&[i, j] : mp){
            if(j == 1) ans[1].push_back(i);
        }
        return ans;
    }
};