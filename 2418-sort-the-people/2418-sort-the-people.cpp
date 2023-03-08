class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        vector<pair<int, string>>t(n);
        for(int i = 0; i < n; i++)
        {
            t[i] = {heights[i], names[i]};
        }
        sort(t.begin(), t.end(), [&](pair<int, string>a, pair<int, string>b){ return a.first > b.first; });
        for(int i = 0; i < n; i++)
        {
            names[i] = t[i].second;
        }
        return names;
    }
};