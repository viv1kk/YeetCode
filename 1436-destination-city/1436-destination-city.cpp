class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, string>mp;
        for(auto i : paths)
             mp[i[0]] = i[1];
        
        string t = paths[0][1];
        while(true)
        {
            if(mp.find(t) == mp.end())
            {
                return t;
            }
            else
                t = mp[t];
        }
        return "";
    }
};