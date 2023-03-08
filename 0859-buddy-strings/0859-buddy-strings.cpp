class Solution {
public:
    bool buddyStrings(string s, string goal) {
        int n = s.length();
        if(n != goal.length()) return false;
        
        int f[26] = {0};
        int g[26] = {0};
        
        for(int i = 0; i < n; i++)
        {
            f[s[i]-'a']++;
            g[goal[i]-'a']++;
        }
        for(int i = 0 ; i < 26; i++)
        {
            if(f[i] != g[i]) return false;
        }
        
        int x = -1;
        for(int i = 0; i < n; i++)
        {
            if(s[i] != goal[i])
            {
                if(x == -1)
                    x = i;
                else
                {
                    swap(s[i], s[x]);
                    return (s == goal);
                }
            }
        }
        for(int i = 0; i < 26; i++)    
        {
            if(f[i] > 1) return true;
        }
        return false;
    }
};