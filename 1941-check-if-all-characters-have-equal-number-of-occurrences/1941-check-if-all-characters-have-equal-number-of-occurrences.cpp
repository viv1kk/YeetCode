class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int>mp;
        for(char i : s) mp[i]++;
        int x = mp[s[0]];
        for(auto i : mp) if(i.second != x) return false;
        return true;
    }
};