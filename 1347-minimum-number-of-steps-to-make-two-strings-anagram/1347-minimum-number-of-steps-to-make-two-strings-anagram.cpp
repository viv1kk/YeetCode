class Solution {
public:
    int minSteps(string s, string t) {
        int f[26] = {0};
        int n = s.length();
        for(int i = 0; i < n; i++) f[s[i]-'a']++;
        int count = 0;
        for(int i = 0; i < n; i++)
        {
            if(f[t[i]-'a'] == 0) count++;
            else f[t[i]-'a']--;
        }
        return count;
    }
};