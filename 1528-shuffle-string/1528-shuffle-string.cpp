class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        vector<pair<int, char>>v;
        for(int i = 0; i < s.length(); i++)
        {
            v.push_back({indices[i], s[i]});
        }
        sort(v.begin(), v.end());
        string ans = "";
        for(auto i : v)
        {
            ans += i.second;
        }
        return ans;
    }
};