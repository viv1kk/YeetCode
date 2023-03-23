class Solution {
public:
    string removeDuplicateLetters(string s) {
        string ans = "";
        bool vis[26] = {false};
        int freq[26] = {0};
        int n = s.length();
        
        for(char&i : s){
            freq[i-'a']++;
        }
        
        for(int i = 0; i < n; i++)
        {
            freq[s[i]-'a']--;
            if(vis[s[i]-'a']) continue;
            while(!ans.empty() && ans.back()>s[i] && freq[ans.back()-'a'] > 0){
                vis[ans.back()-'a'] = false;
                ans.pop_back();
            }
            vis[s[i]-'a'] = true;
            ans += s[i];
        }
        return ans;
    }
};