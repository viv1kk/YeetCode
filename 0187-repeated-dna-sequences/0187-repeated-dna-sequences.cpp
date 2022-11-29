class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int n = s.length();
        vector<string>ans;
        // if(n <= 10)
        // {
        //     return ans;
        // }
        
        unordered_map<string, int>mp;
        int i = 0;
        while(i+9 < n)
        {
            mp[s.substr(i, 10)]++;
            i++;
        }
        
        for(auto i : mp)
        {
            if(i.second > 1)
            {
                ans.emplace_back(i.first);
            }
        }
        
        return ans;
    }
};