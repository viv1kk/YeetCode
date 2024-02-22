class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n == 1 && trust.size() == 0) return 1;
        unordered_map<int, set<int>>mp;
        unordered_map<int, int>mp2;
        
        for(auto& i : trust){
            mp[i[1]].insert(i[0]);
            mp2[i[0]] = i[1];
        }
        for(auto&[i, j] : mp){
            if(j.size() == n-1 && j.find(i) == j.end() && mp2.find(i) == mp2.end())
                return i;
        }
        return -1;
    }
};