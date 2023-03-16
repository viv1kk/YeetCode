class Solution {
public:
    string removeStars(string s) {
        string ans = "";
        int n = s.length();
        ans.reserve(n);
        int j = 0;
        for(int i = 0; i < n; i++)
        {
            if(ans == "")
            {
                ans += s[i];
                continue;
            }
            char x = ans.back();
            
            if((x != '*' && s[i] == '*')||(x == '*' && s[i] != '*'))
                ans.pop_back();
            else
            {
                ans += s[i];
            }
        }
        return ans;
    }
};