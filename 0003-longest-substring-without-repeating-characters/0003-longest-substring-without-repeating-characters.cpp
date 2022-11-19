class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int>mp;
        int b = 0;
        int m = 0;
        
        for(int i = 0; i < s.length(); i++)
        {
            auto it = mp.find(s[i]);
            if(it == mp.end())
                mp[s[i]] = i;
            else
            {
                for(int j = b; j < (it->second); j++)                    
                    mp.erase(s[j]);
                b = (it->second)+1;
                mp[s[i]] = i;
            }
            int t = mp.size();
            m = max(m, t);            
        }
        return m;
    }
};