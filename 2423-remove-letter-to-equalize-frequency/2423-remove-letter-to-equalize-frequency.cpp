class Solution {
public:
    bool equalFrequency(string word) {
        int n = word.length();
        
        int ind = 0;
        while(ind < n)
        {
            vector<int>f(26, 0);
            for(int j = 0; j < n; j++)
            {
                if(j == ind) continue;
                f[word[j]-'a']++;
            }
            int flag = 0;
            int mn = 102, mx = 0;
            for(int k = 0; k < 26; k++)
            {
                if(f[k] == 0) continue;
                mn = min(mn, f[k]);
                mx = max(mx, f[k]);
            }
            if(mn == mx) return true;
            ind++;
        }
        return false;
    }
};