class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string>temp = strs;
        
        for(string & i : temp)
        {
            sort(i.begin(), i.end());
        }
        
        unordered_map<string, vector<string>>mp;
        
        for(int i = 0; i < temp.size(); i++)
        {
            mp[temp[i]].push_back(strs[i]);
        }
        
        vector<vector<string>>ans; 
        for(auto &i : mp)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};