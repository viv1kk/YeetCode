class Solution {
public:
    string sortSentence(string s) {
        string t = "";
        vector<string>v(10, "");
        int n = s.length();
        for(int i = 0; i < n; i++)
        {
            if(s[i] == ' ')continue;
            if(s[i]-'1' >= 0 && s[i]-'1' <= 9)
            {
                v[s[i]-'1'].append(t);
                t = "";
                continue;
            }
            t += s[i];
        }
        
        string ans = "";
        for(auto i : v)
        {
            ans.append(i);
            if(i != "") ans += ' ';      
        }
        ans.pop_back();
        return ans;
    }
};