class Solution {
public:
    string removeStars(string s) {
        int n = s.length();
        string ans = "";
        ans.reserve(n);
        int j = 0;
        for(int i = 0; i < n; i++){
            if(ans == ""){ ans += s[i]; continue; }
            char x = ans.back();
            if(!(x != '*' ^ s[i] == '*')) ans.pop_back();
            else ans.push_back(s[i]);
        }
        return ans;
    }
};