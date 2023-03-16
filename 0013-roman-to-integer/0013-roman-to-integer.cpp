class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int>mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        
        int ans = 0;
        int n = s.length();
        char prev = s[n-1];
        for(int i = n-1; i >= 0; i--)
        {
            if(mp[prev] > mp[s[i]])
            {
                ans-= mp[s[i]];
            }
            else
            {
                prev = s[i];
                ans+= mp[s[i]];
            }
        }
        return ans;
        
    }
};