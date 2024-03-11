class Solution {
public:
    string customSortString(string order, string s) {
        int i = 0;
        unordered_map<int, int>mp;
        for(char c : order) mp[c] = i++;
        
        sort(s.begin(), s.end(), [&](char a, char b){
            return mp[a] < mp[b];
        });
        
        return s;
    }
};