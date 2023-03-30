class Solution {
public:
    int minSteps(string s, string t) {
        int f[127] = {0};
        int n = s.length();
        for(int i = 0; i < n; i++) f[s[i]]++;
        int count = 0;
        for(int i = 0; i < n; i++)
        {
            if(f[t[i]] == 0) count++;
            else f[t[i]]--;
        }
        return count;
    }
};