class Solution {
public:
    string sortString(string s) {
        int f[26] {0};
        int n = s.length();
        
        for(int i = 0; i < n; i++)
        {
            f[s[i]-'a']++;
        }
        
        string ans = "";
        bool x = true;
        while(ans.length()!= n)
        {
            if(x)
            {
                for(int i = 0; i < 26; i++)
                {
                    if(f[i] == 0)
                        continue;
                    ans += 'a'+ i;
                    f[i]--;
                }
                x = !x;    
            }
            else
            {
                for(int i = 25; i >= 0; i--)
                {
                    if(f[i] == 0)
                        continue;
                    ans += 'a'+ i;
                    f[i]--;
                }
                x = !x;
            }
        }
        return ans;
    }
};